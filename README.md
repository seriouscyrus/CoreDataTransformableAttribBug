# CoreDataTransformableAttribBug
Core data binary store transformable attribute bug in iOS11

This xcode project demonstrates a bug in iOS 11 Core Data Binary stores.

To get the crash the project must be run *twice*

The first time creates the store

The second time, the saved store is attempted to be opened and the application crashes.

The main changes to the clean XCode project built with Core Data included are:

Modified - (NSPersistentContainer *)persistentContainer 

This now specifies a Binary Store type by using a NSPersistentStoreDescription and setting the type to nsbinaryStoreType

Modified - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions 

To create an entity on first opening, or access the entity with 1 is already present.

Added CoreDataEntity to the datamodel with 1 string and 1 transformable attribute

Create the CoreData classes and changed to the transformable attribute property to use the UIColor class.
