//
//  UserDemographicTableViewController.h
//  ElectoralExperiment
//
//  Created by Stefan Agapie on 8/26/12.
//
//  Copyright 2011 Stefan Agapie. All rights reserved.
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.

//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface UserDemographicTableViewController : UITableViewController

// -------------------- Core Data... ------------------------ //
@property (retain, nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;

- (NSURL *)applicationDocumentsDirectory;

#pragma mark - External SQLITE SOURCE SETUP & ACCESS
- (id)initWith_sqlite_dataBase:(NSURL*)sqliteDB_URLsource;
// used to setup Core Data from an external sqlite db source //
- (void) setupCoreDataForReadingInFromAnExternalSQLITEdbSouce:(NSURL*)sqliteDB_URLsource;
// returns an NSDictionary of enties from the Core Data Store //
- (NSDictionary*) retrieveAnNSDictionaryOfEntitiesFromCoreDataStore;

@end
