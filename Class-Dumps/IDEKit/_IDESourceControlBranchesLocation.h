//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDESourceControlWorkingTree;

@interface _IDESourceControlBranchesLocation : NSObject <DVTInvalidation>
{
    IDESourceControlWorkingTree *_sourceTree;
}

+ (void)initialize;
@property(retain) IDESourceControlWorkingTree *sourceTree; // @synthesize sourceTree=_sourceTree;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
