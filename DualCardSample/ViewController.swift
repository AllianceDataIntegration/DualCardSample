//
//  ViewController.swift
//  DualCardSample
//
//  Created by MLS Discovery on 9/13/18.
//  Copyright © 2018 SampleClientAppMaker. All rights reserved.
//

import UIKit
import ADSFoundation
import ADSDualCard


class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        // Setup config and show the home screen...
        if let navController = self.navigationController {
            let config = ADSDualDefaultShowConfig(dismissHandler: {
                let _ = self.navigationController?.popToViewController(self, animated: true)
            })
            // Inline
            ADSDefaultDualCard.instance.showDualCard(.home, with: navController, and: config)
            // Embedded
//            ADSDefaultDualCard.instance.showDualCard(feature: .home, navigateWithIn: self, constrainedIn: self.view, with: config)
        }
    }


}

