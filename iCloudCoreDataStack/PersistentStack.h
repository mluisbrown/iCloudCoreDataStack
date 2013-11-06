@import Foundation;
@import CoreData;

@interface PersistentStack : NSObject

- (id)initWithStoreURL:(NSURL *)storeURL modelURL:(NSURL *)modelURL;

@property (nonatomic,strong,readonly) NSManagedObjectContext *managedObjectContext;

@end