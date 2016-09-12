// Copyright 2009-2012 The MumbleKit Developers. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

struct MKCryptStatePrivate;

@interface MKCryptState : NSObject

- (id) init;
- (void) dealloc;

- (BOOL) valid;
- (void) generateKey;
- (void) setKey:(NSData *)key eiv:(NSData *)enc div:(NSData *)dec;
- (void) setDecryptIV:(NSData *)dec;
- (NSData *) encryptData:(NSData *)data;
- (NSData *) decryptData:(NSData *)data;

//API for UDP statistic
- (unsigned int) uiGood;
- (unsigned int) uiLate;
- (unsigned int) uiLost;
- (unsigned int) uiResync;

- (unsigned int) uiRemoteGood;
- (unsigned int) uiRemoteLate;
- (unsigned int) uiRemoteLost;
- (unsigned int) uiRemoteResync;

- (void) setUIRemoteGood:(unsigned int)uiRG;
- (void)  setUIRemoteLate:(unsigned int)uiRLat;
- (void)  setUIRemoteLost:(unsigned int)uiRLos;
- (void)  setUIRemoteResync:(unsigned int)uiRS;

- (void) setUIGood:(unsigned int)uiG;
- (void)  setUILate:(unsigned int)uiLat;
- (void)  setUILost:(unsigned int)uiLos;
- (void)  setUIResync:(unsigned int)uiS;

@end
