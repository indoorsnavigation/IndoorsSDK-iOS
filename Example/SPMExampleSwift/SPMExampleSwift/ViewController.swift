//
//  ViewController.swift
//  SPMExampleSwift
//
//  Created by Indoors on 11.02.2026.
//


import UIKit
import MapLibre
import IndoorsCoreSDK
import IndoorsMapSDK

class ViewController: UIViewController{
    // MARK: - UI Elements
    private lazy var mapContainer: UIView = {
        let view = UIView()
        view.translatesAutoresizingMaskIntoConstraints = false
        return view
    }()
    
    // MARK: - Properties
    
    private var pinnedApplication: INApplication?
    private var globalMapView: INGlobalMapView!
    private var building = INBuilding()
    
    private var clientId = "YOUR_APP_CLIENT_ID"
    private var clientSecret = "YOUR_APP_CLIENT_SECRET"
    
    // MARK: - View Lifecycle
    override func viewDidLoad() {
        super.viewDidLoad()
        
        setupUI()
        addSubviews()
        applyConstraints()
        
        INCore.initialize(with: INCoreConfiguration.default())
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        INCore.sharedInstance().service.authorizeApplication(withClientId: clientId, andClientSecret: clientSecret) { error in
            self.loadMap()
        }
    }
    
    
    
    // MARK: - Load map and include location (see on map)
    
    private func loadMap() {
        INCore.sharedInstance().service.loadApplications { [weak self] applications, error in
            guard let self = self else { return }
            if let firstApplication = applications[0] as? INApplication{
                
                self.pinnedApplication = firstApplication
                
                INCore.sharedInstance().service.loadBuildings(of: firstApplication) { [weak self] buildings, error in
                    guard let self = self, buildings.count > 0,  let building  = buildings[0] as? INBuilding else { return }
                    
                    //TODO: - to show map uncomment this
                    DispatchQueue.main.async {
                        self.globalMapView = INGlobalMapView(frame: self.mapContainer.bounds)
                        self.mapContainer.addSubview(self.globalMapView)
                        self.globalMapView.buildings = buildings
                            //   self.globalMapView.currentBuilding = building
                    }
                    
                    
                }
            }
        }
    }
}


//// MARK: - Layout
private extension ViewController {
    func setupUI(){
        overrideUserInterfaceStyle = .light
    }
    
    func addSubviews(){

        view.addSubview(mapContainer)
    }
    
    func applyConstraints(){
        NSLayoutConstraint.activate([
            // mapContainer Constraints
            mapContainer.topAnchor.constraint(equalTo: view.topAnchor, constant: 16),
            mapContainer.leadingAnchor.constraint(equalTo: view.leadingAnchor),
            mapContainer.trailingAnchor.constraint(equalTo: view.trailingAnchor),
            mapContainer.bottomAnchor.constraint(equalTo: view.bottomAnchor, constant: -16),
            

        ])
    }
}


