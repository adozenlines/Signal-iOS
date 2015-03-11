//
//  VersionMigrations.h
//  Signal
//
//  Created by Frederic Jacobs on 29/07/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>

#define RECENT_CALLS_DEFAULT_KEY @"RPRecentCallsDefaultKey"

@interface VersionMigrations : NSObject

+ (void)migrateBloomFilter;

+ (void)migrateFrom1Dot0Dot2ToVersion2Dot0;

+ (BOOL)isMigratingTo2Dot0;


@end
