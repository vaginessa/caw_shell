// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/GURLUtils

#ifndef org_chromium_net_GURLUtils_JNI
#define org_chromium_net_GURLUtils_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kGURLUtilsClassPath[] = "org/chromium/net/GURLUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_GURLUtils_clazz = NULL;
}  // namespace

namespace net {

static jstring GetOrigin(JNIEnv* env, jclass clazz,
    jstring url);

static jstring GetScheme(JNIEnv* env, jclass clazz,
    jstring url);

// Step 2: method stubs.

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_GURLUtils_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kGURLUtilsClassPath).obj()));
  static const JNINativeMethod kMethodsGURLUtils[] = {
    { "nativeGetOrigin",
"("
"Ljava/lang/String;"
")"
"Ljava/lang/String;", reinterpret_cast<void*>(GetOrigin) },
    { "nativeGetScheme",
"("
"Ljava/lang/String;"
")"
"Ljava/lang/String;", reinterpret_cast<void*>(GetScheme) },
  };
  const int kMethodsGURLUtilsSize = arraysize(kMethodsGURLUtils);

  if (env->RegisterNatives(g_GURLUtils_clazz,
                           kMethodsGURLUtils,
                           kMethodsGURLUtilsSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace net

#endif  // org_chromium_net_GURLUtils_JNI
