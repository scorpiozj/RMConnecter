//
//  RMAppVersion.h
//  Connecter
//
//  Created by Markus on 18.02.14.
//  Copyright (c) 2014 Realmac Software. All rights reserved.
//

#import "RMXMLObject.h"
#import <Foundation/Foundation.h>

@interface RMAppVersion : NSObject <RMXMLObject>

@property (nonatomic, strong) NSString *versionString;
@property (nonatomic, strong) NSArray *locales;

@end
