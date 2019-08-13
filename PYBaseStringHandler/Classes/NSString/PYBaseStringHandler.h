//
//  PYBaseStringHandler.h
//  FBSnapshotTestCase
//
//  Created by 衣二三 on 2019/8/13.
//

#import <Foundation/Foundation.h>
#import "BaseStringHandler.h"
#import <AttributedStr/BaseAttriButedStrHandler+ChangeStyle.h>

#import <FiltrateRuler/BaseFiltrateRulerHeader.h>
#import <AttributedStr/NSAttributedString+Size.h>
#import <AttributedStr/ParagraphStyle/BaseParagraphStyleHandler+Handler.h>
NS_ASSUME_NONNULL_BEGIN

@interface PYBaseStringHandler : NSObject
@end

/// 1. 搜索
/**
 /// 根据多个 AttributedStrFiltrateRuler 查询匹配
 - (NSArray <AttributedStrFiltrateRuler *>*) filtrates: (NSArray <AttributedStrFiltrateRuler *>*)filtrateRulerArray;
 
 /// 查询匹配
 - (AttributedStrFiltrateRuler *) filtrate: (AttributedStrFiltrateRuler *)ruler;
*/





NS_ASSUME_NONNULL_END
