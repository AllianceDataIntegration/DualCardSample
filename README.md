# DualCardSample


### App Delegate Setup Forever21
#### ADSDefaultDualCard.instance.bootstrapDualCard (is the method you need to call)
##### You might need to uncheck ‘Under Top Bars’ for Embedded view controller

```Swift import ADSDualCard
import ADSFoundation

 func application(_ application: UIApplication, 
 didFinishLaunchingWithOptions launchOptions: 
 [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        let clientName = "forever21"
        let apiKey = "180SL87zqi0f2fw"
        let environment = ADSEnvironment.stage
        
        ADSDefaultDualCard.instance.bootstrapDualCard(withClientName: clientName,
                                                      apiKey: apiKey, environment: environment) {
                                                        print("Bootstrap complete")
        }
        return true
    }
```
    
### Setup in view controller:
```Swift
      override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        // Setup config and show the home screen...
            let config = ADSDualDefaultShowConfig(dismissHandler: {
                let _ = self.navigationController?.popToViewController(self, animated: true)
            })
            
        // Inline
         //ADSDefaultDualCard.instance.showDualCard(.home, with: self.navigationController, and: config)
        // Embedded - you might want to use this Embed API
           ADSDefaultDualCard.instance.showDualCard(feature: .home, navigateWithIn: self, constrainedIn: self.view, with: config)
    }
 ```
