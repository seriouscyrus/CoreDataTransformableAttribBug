# CoreDataTransformableAttribBug
Core data binary store transformable attribute bug in iOS11 (Now resolved, see the Branch AppleFix)

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

# Resolution

Apple got back to me on my bug query, 2 new options are available when opening a binary datastore, NSBinaryStoreSecureDecodingClasses, and NSBinaryStoreInsecureDecodingCompatibilityOption, declared in NSPersistentStoreCoordinator.h .

I created a branch with the fix called AppleFix so the changes can be easily seen.  I used the NSBinaryStoreSecureDecodingClasses option to specify an NSSet with the UIColor Class.
