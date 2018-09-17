//
//  ViewController.swift
//  DualCardSample
//
//  Created by MLS Discovery on 9/13/18.
//  Copyright © 2018 Alliance Data. All rights reserved.
//

import UIKit
import ADSDualCard

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func viewDidAppear(_ animated: Bool) {
        // Setup config and show the home screen...
        let config = ADSDualDefaultShowConfig(dismissHandler: getDismissal() ?? {})
        // Embed - you might want to use this :)
        ADSDefaultDualCard.instance.showDualCard(feature: .home, navigateWithIn: self, constrainedIn: view, with: config)
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    var dismisser : (() -> Void )?
    
    func getDismissal() -> (() -> Void )? {
        let dismissHandler: () -> Void = {
            self.navigationController?.popToViewController(self, animated: true)
        }
        return dismissHandler
    }
    
    @IBAction func popBackToClientApp(_ sender: Any) {
        dismiss(animated: true, completion: nil)
    }
}

