iCloudCoreDataStack
===================

A persistence stack for using Core Data with iCloud Sync in iOS7

Adapted from code by Chris Eidhof for [objc.io #4](http://www.objc.io/issue-4/full-core-data-application.html). 

This is not a full implementation, but a template that can be used as the basis for any iOS 7 Core Data application requiring iCloud Sync. Please read the comments in `PersistentStack.m` for more implementation details.

Core Data iCloud Sync became and order of magnitude easier to implement in iOS 7. However, at the time of writing there is still no official sample application from Apple showing how to implement it (the existing iOS 6 samples are now completely out of date). The iCloud related parts of the code here are brought together from information in WWDC '13 Session 207 [What's New in Core Data and iCloud](https://developer.apple.com/wwdc/videos/?id=207) and posts in the Apple Developer Forums.

Still, even having seen the WWDC session video a number of times and having read a lot of Dev Forum posts, it's not immediately apparent exactly how straightforward implementing Core Data iCloud Sync has become with iOS 7. I created iCloudCoreDataStack to show just how simple it really is, and how little extra code is required above and beyond a regular Core Data implementation.

You no longer need to know whether the user is using iCloud or not, or even has an iCloud account on their device. Core Data now transparently handles creating a local store for you in those situations. The only additions to the stack for using iCloud are passing the `NSPersistentStoreUbiquitousContentNameKey` key when adding the persistent store and subscribing to the 3 persistent store notifications. That's it. Core Data iCloud Sync just got a whole lot easier with iOS 7!
