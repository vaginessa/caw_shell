// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/android_webview/AwContentsIoThreadClient

#ifndef org_chromium_android_webview_AwContentsIoThreadClient_JNI
#define org_chromium_android_webview_AwContentsIoThreadClient_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kAwContentsIoThreadClientClassPath[] =
    "org/chromium/android_webview/AwContentsIoThreadClient";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_AwContentsIoThreadClient_clazz = NULL;
}  // namespace

namespace android_webview {

// Step 2: method stubs.

static base::subtle::AtomicWord g_AwContentsIoThreadClient_getCacheMode = 0;
static jint Java_AwContentsIoThreadClient_getCacheMode(JNIEnv* env, jobject obj)
    {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsIoThreadClient_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsIoThreadClient_clazz,
      "getCacheMode",

"("
")"
"I",
      &g_AwContentsIoThreadClient_getCacheMode);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_AwContentsIoThreadClient_shouldInterceptRequest = 0;
static ScopedJavaLocalRef<jobject>
    Java_AwContentsIoThreadClient_shouldInterceptRequest(JNIEnv* env, jobject
    obj, jstring url,
    jboolean isMainFrame) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsIoThreadClient_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsIoThreadClient_clazz,
      "shouldInterceptRequest",

"("
"Ljava/lang/String;"
"Z"
")"
"Lorg/chromium/android_webview/InterceptedRequestData;",
      &g_AwContentsIoThreadClient_shouldInterceptRequest);

  jobject ret =
    env->CallObjectMethod(obj,
      method_id, url, isMainFrame);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_AwContentsIoThreadClient_shouldBlockContentUrls = 0;
static jboolean Java_AwContentsIoThreadClient_shouldBlockContentUrls(JNIEnv*
    env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsIoThreadClient_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsIoThreadClient_clazz,
      "shouldBlockContentUrls",

"("
")"
"Z",
      &g_AwContentsIoThreadClient_shouldBlockContentUrls);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AwContentsIoThreadClient_shouldBlockFileUrls =
    0;
static jboolean Java_AwContentsIoThreadClient_shouldBlockFileUrls(JNIEnv* env,
    jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsIoThreadClient_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsIoThreadClient_clazz,
      "shouldBlockFileUrls",

"("
")"
"Z",
      &g_AwContentsIoThreadClient_shouldBlockFileUrls);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_AwContentsIoThreadClient_shouldBlockNetworkLoads = 0;
static jboolean Java_AwContentsIoThreadClient_shouldBlockNetworkLoads(JNIEnv*
    env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsIoThreadClient_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsIoThreadClient_clazz,
      "shouldBlockNetworkLoads",

"("
")"
"Z",
      &g_AwContentsIoThreadClient_shouldBlockNetworkLoads);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AwContentsIoThreadClient_onDownloadStart = 0;
static void Java_AwContentsIoThreadClient_onDownloadStart(JNIEnv* env, jobject
    obj, jstring url,
    jstring userAgent,
    jstring contentDisposition,
    jstring mimeType,
    jlong contentLength) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsIoThreadClient_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsIoThreadClient_clazz,
      "onDownloadStart",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"J"
")"
"V",
      &g_AwContentsIoThreadClient_onDownloadStart);

  env->CallVoidMethod(obj,
      method_id, url, userAgent, contentDisposition, mimeType, contentLength);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContentsIoThreadClient_newLoginRequest = 0;
static void Java_AwContentsIoThreadClient_newLoginRequest(JNIEnv* env, jobject
    obj, jstring realm,
    jstring account,
    jstring args) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsIoThreadClient_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsIoThreadClient_clazz,
      "newLoginRequest",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_AwContentsIoThreadClient_newLoginRequest);

  env->CallVoidMethod(obj,
      method_id, realm, account, args);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_AwContentsIoThreadClient_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kAwContentsIoThreadClientClassPath).obj()));
  return true;
}
}  // namespace android_webview

#endif  // org_chromium_android_webview_AwContentsIoThreadClient_JNI