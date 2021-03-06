//
//  PBGitSVSubmoduleItem.h
//  GitX
//
//  Created by Seth Raphael on 9/14/12.
//
//

#import <Foundation/Foundation.h>
#import "PBSourceViewItem.h"

@class PBGitSubmodule;

@interface PBGitSVSubmoduleItem : PBSourceViewItem
+ (id) itemWithSubmodule:(PBGitSubmodule*)submodule;
@property (nonatomic, strong) PBGitSubmodule* submodule;
@end
