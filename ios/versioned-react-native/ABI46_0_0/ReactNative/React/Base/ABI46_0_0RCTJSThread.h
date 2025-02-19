/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <ABI46_0_0React/ABI46_0_0RCTDefines.h>

/**
 * This constant can be returned from +methodQueue to force module
 * methods to be called on the JavaScript thread. This can have serious
 * implications for performance, so only use this if you're sure it's what
 * you need.
 *
 * NOTE: ABI46_0_0RCTJSThread is not a real libdispatch queue
 */
ABI46_0_0RCT_EXTERN dispatch_queue_t ABI46_0_0RCTJSThread;

/**
 * Initializes the ABI46_0_0RCTJSThread constant.
 * Exported because the bridgeless initialization layer needs to initialize
 * ABI46_0_0RCTJSThread. In bridgeless mode, ABI46_0_0RCTBridge isn't accessed, and ABI46_0_0RCTJSThread
 * therefore isn't initialized.
 */
ABI46_0_0RCT_EXTERN void _ABI46_0_0RCTInitializeJSThreadConstantInternal(void);
