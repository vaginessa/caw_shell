// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaPlayerListener

#ifndef org_chromium_media_MediaPlayerListener_JNI
#define org_chromium_media_MediaPlayerListener_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kMediaPlayerListenerClassPath[] =
    "org/chromium/media/MediaPlayerListener";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_MediaPlayerListener_clazz = NULL;
}  // namespace

namespace media {

// Step 2: method stubs.
static void OnMediaError(JNIEnv* env, jobject obj,
    jlong nativeMediaPlayerListener,
    jint errorType) {
  DCHECK(nativeMediaPlayerListener) << "OnMediaError";
  MediaPlayerListener* native =
      reinterpret_cast<MediaPlayerListener*>(nativeMediaPlayerListener);
  return native->OnMediaError(env, obj, errorType);
}

static void OnVideoSizeChanged(JNIEnv* env, jobject obj,
    jlong nativeMediaPlayerListener,
    jint width,
    jint height) {
  DCHECK(nativeMediaPlayerListener) << "OnVideoSizeChanged";
  MediaPlayerListener* native =
      reinterpret_cast<MediaPlayerListener*>(nativeMediaPlayerListener);
  return native->OnVideoSizeChanged(env, obj, width, height);
}

static void OnBufferingUpdate(JNIEnv* env, jobject obj,
    jlong nativeMediaPlayerListener,
    jint percent) {
  DCHECK(nativeMediaPlayerListener) << "OnBufferingUpdate";
  MediaPlayerListener* native =
      reinterpret_cast<MediaPlayerListener*>(nativeMediaPlayerListener);
  return native->OnBufferingUpdate(env, obj, percent);
}

static void OnMediaPrepared(JNIEnv* env, jobject obj,
    jlong nativeMediaPlayerListener) {
  DCHECK(nativeMediaPlayerListener) << "OnMediaPrepared";
  MediaPlayerListener* native =
      reinterpret_cast<MediaPlayerListener*>(nativeMediaPlayerListener);
  return native->OnMediaPrepared(env, obj);
}

static void OnPlaybackComplete(JNIEnv* env, jobject obj,
    jlong nativeMediaPlayerListener) {
  DCHECK(nativeMediaPlayerListener) << "OnPlaybackComplete";
  MediaPlayerListener* native =
      reinterpret_cast<MediaPlayerListener*>(nativeMediaPlayerListener);
  return native->OnPlaybackComplete(env, obj);
}

static void OnSeekComplete(JNIEnv* env, jobject obj,
    jlong nativeMediaPlayerListener) {
  DCHECK(nativeMediaPlayerListener) << "OnSeekComplete";
  MediaPlayerListener* native =
      reinterpret_cast<MediaPlayerListener*>(nativeMediaPlayerListener);
  return native->OnSeekComplete(env, obj);
}

static void OnMediaInterrupted(JNIEnv* env, jobject obj,
    jlong nativeMediaPlayerListener) {
  DCHECK(nativeMediaPlayerListener) << "OnMediaInterrupted";
  MediaPlayerListener* native =
      reinterpret_cast<MediaPlayerListener*>(nativeMediaPlayerListener);
  return native->OnMediaInterrupted(env, obj);
}

static base::subtle::AtomicWord g_MediaPlayerListener_releaseResources = 0;
static void Java_MediaPlayerListener_releaseResources(JNIEnv* env, jobject obj)
    {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaPlayerListener_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaPlayerListener_clazz,
      "releaseResources",

"("
")"
"V",
      &g_MediaPlayerListener_releaseResources);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaPlayerListener_create = 0;
static ScopedJavaLocalRef<jobject> Java_MediaPlayerListener_create(JNIEnv* env,
    jint nativeMediaPlayerListener,
    jobject context,
    jobject mediaPlayerBridge) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaPlayerListener_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaPlayerListener_clazz,
      "create",

"("
"I"
"Landroid/content/Context;"
"Lorg/chromium/media/MediaPlayerBridge;"
")"
"Lorg/chromium/media/MediaPlayerListener;",
      &g_MediaPlayerListener_create);

  jobject ret =
    env->CallStaticObjectMethod(g_MediaPlayerListener_clazz,
      method_id, nativeMediaPlayerListener, context, mediaPlayerBridge);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_MediaPlayerListener_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kMediaPlayerListenerClassPath).obj()));
  static const JNINativeMethod kMethodsMediaPlayerListener[] = {
    { "nativeOnMediaError",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(OnMediaError) },
    { "nativeOnVideoSizeChanged",
"("
"J"
"I"
"I"
")"
"V", reinterpret_cast<void*>(OnVideoSizeChanged) },
    { "nativeOnBufferingUpdate",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(OnBufferingUpdate) },
    { "nativeOnMediaPrepared",
"("
"J"
")"
"V", reinterpret_cast<void*>(OnMediaPrepared) },
    { "nativeOnPlaybackComplete",
"("
"J"
")"
"V", reinterpret_cast<void*>(OnPlaybackComplete) },
    { "nativeOnSeekComplete",
"("
"J"
")"
"V", reinterpret_cast<void*>(OnSeekComplete) },
    { "nativeOnMediaInterrupted",
"("
"J"
")"
"V", reinterpret_cast<void*>(OnMediaInterrupted) },
  };
  const int kMethodsMediaPlayerListenerSize =
      arraysize(kMethodsMediaPlayerListener);

  if (env->RegisterNatives(g_MediaPlayerListener_clazz,
                           kMethodsMediaPlayerListener,
                           kMethodsMediaPlayerListenerSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace media

#endif  // org_chromium_media_MediaPlayerListener_JNI
