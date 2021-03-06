//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleNetworkRequestBodyBuilder.h"

@class VunglePlacement, VunglePlayOptionsProvider;

@interface VungleWillPlayAdRequestBodyBuilder : VungleNetworkRequestBodyBuilder
{
    VunglePlacement *_placement;	// 8 = 0x8
    VunglePlayOptionsProvider *_playOptions;	// 16 = 0x10
}

@property(copy, nonatomic) VunglePlayOptionsProvider *playOptions; // @synthesize playOptions=_playOptions;
@property(copy, nonatomic) VunglePlacement *placement; // @synthesize placement=_placement;
- (void).cxx_destruct;	// IMP=0x0000000100ad3738
- (id)buildRequestParameters;	// IMP=0x0000000100ad32f4
- (id)initWithPlacement:(id)arg1 networkManager:(id)arg2 publisherInformation:(id)arg3 playOptions:(id)arg4;	// IMP=0x0000000100ad31e0

@end

