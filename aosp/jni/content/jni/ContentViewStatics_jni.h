// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/ContentViewStatics

#ifndef org_chromium_content_browser_ContentViewStatics_JNI
#define org_chromium_content_browser_ContentViewStatics_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kContentViewStaticsClassPath[] =
    "org/chromium/content/browser/ContentViewStatics";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_ContentViewStatics_clazz = NULL;
}  // namespace

static jstring FindAddress(JNIEnv* env, jclass clazz,
    jstring addr);

static void SetWebKitSharedTimersSuspended(JNIEnv* env, jclass clazz,
    jboolean suspend);

// Step 2: method stubs.

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_ContentViewStatics_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kContentViewStaticsClassPath).obj()));
  static const JNINativeMethod kMethodsContentViewStatics[] = {
    { "nativeFindAddress",
"("
"Ljava/lang/String;"
")"
"Ljava/lang/String;", reinterpret_cast<void*>(FindAddress) },
    { "nativeSetWebKitSharedTimersSuspended",
"("
"Z"
")"
"V", reinterpret_cast<void*>(SetWebKitSharedTimersSuspended) },
  };
  const int kMethodsContentViewStaticsSize =
      arraysize(kMethodsContentViewStatics);

  if (env->RegisterNatives(g_ContentViewStatics_clazz,
                           kMethodsContentViewStatics,
                           kMethodsContentViewStaticsSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}

#endif  // org_chromium_content_browser_ContentViewStatics_JNI