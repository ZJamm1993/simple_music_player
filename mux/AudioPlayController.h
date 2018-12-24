//
//  AudioPlayer.h
//  mux
//
//  Created by Jam on 2017/9/8.
//  Copyright © 2017年 Jam. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

#define AudioPlayerPlayingMediaInfoNotification @"AudioPlayerPlayingMediaInfoNotification"
#define AudioPlayerStartMediaPlayNotification @"AudioPlayerStartMediaPlayNotification"

@interface AudioPlayController : NSObject

+ (instancetype)sharedAudioPlayer;

@property (readonly, nonatomic) BOOL hasSongPlay;

@property (nonatomic, assign) CGFloat progress;
@property (nonatomic, assign) NSTimeInterval currentTime;
@property (nonatomic, assign, readonly) BOOL playing;

// 从播放列表进入
- (void)playMediaItem:(MPMediaItem *)item inPlayList:(MPMediaPlaylist *)list;

// 插播
- (void)insertCutMediaItem:(MPMediaItem *)item;

- (void)play;
- (void)pause;
- (void)playOrPause;
- (void)playPrevious;
- (void)playNext;
- (void)shuffle:(BOOL)shuffle;

- (void)loadLastPlay;
- (void)saveLastPlay;

@end
