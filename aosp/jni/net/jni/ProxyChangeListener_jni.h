// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/ProxyChangeListener

#ifndef org_chromium_net_ProxyChangeListener_JNI
#define org_chromium_net_ProxyChangeListener_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kProxyChangeListenerClassPath[] =
    "org/chromium/net/ProxyChangeListener";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_ProxyChangeListener_clazz = NULL;
}  // namespace

namespace net {

// Step 2: method stubs.
static void ProxySettingsChangedTo(JNIEnv* env, jobject obj,
    jlong nativePtr,
    jstring host,
    jint port) {
  DCHECK(nativePtr) << "ProxySettingsChangedTo";
  ProxyConfigServiceAndroid::JNIDelegate* native =
      reinterpret_cast<ProxyConfigServiceAndroid::JNIDelegate*>(nativePtr);
  return native->ProxySettingsChangedTo(env, obj, host, port);
}

static void ProxySettingsChanged(JNIEnv* env, jobject obj,
    jlong nativePtr) {
  DCHECK(nativePtr) << "ProxySettingsChanged";
  ProxyConfigServiceAndroid::JNIDelegate* native =
      reinterpret_cast<ProxyConfigServiceAndroid::JNIDelegate*>(nativePtr);
  return native->ProxySettingsChanged(env, obj);
}

static base::subtle::AtomicWord g_ProxyChangeListener_create = 0;
static ScopedJavaLocalRef<jobject> Java_ProxyChangeListener_create(JNIEnv* env,
    jobject context) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_ProxyChangeListener_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_ProxyChangeListener_clazz,
      "create",

"("
"Landroid/content/Context;"
")"
"Lorg/chromium/net/ProxyChangeListener;",
      &g_ProxyChangeListener_create);

  jobject ret =
    env->CallStaticObjectMethod(g_ProxyChangeListener_clazz,
      method_id, context);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_ProxyChangeListener_getProperty = 0;
static ScopedJavaLocalRef<jstring> Java_ProxyChangeListener_getProperty(JNIEnv*
    env, jstring property) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_ProxyChangeListener_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_ProxyChangeListener_clazz,
      "getProperty",

"("
"Ljava/lang/String;"
")"
"Ljava/lang/String;",
      &g_ProxyChangeListener_getProperty);

  jstring ret =
static_cast<jstring>(env->CallStaticObjectMethod(g_ProxyChangeListener_clazz,
      method_id, property));
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_ProxyChangeListener_start = 0;
static void Java_ProxyChangeListener_start(JNIEnv* env, jobject obj, jlong
    nativePtr) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_ProxyChangeListener_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_ProxyChangeListener_clazz,
      "start",

"("
"J"
")"
"V",
      &g_ProxyChangeListener_start);

  env->CallVoidMethod(obj,
      method_id, nativePtr);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_ProxyChangeListener_stop = 0;
static void Java_ProxyChangeListener_stop(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_ProxyChangeListener_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_ProxyChangeListener_clazz,
      "stop",

"("
")"
"V",
      &g_ProxyChangeListener_stop);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_ProxyChangeListener_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kProxyChangeListenerClassPath).obj()));
  static const JNINativeMethod kMethodsProxyChangeListener[] = {
    { "nativeProxySettingsChangedTo",
"("
"J"
"Ljava/lang/String;"
"I"
")"
"V", reinterpret_cast<void*>(ProxySettingsChangedTo) },
    { "nativeProxySettingsChanged",
"("
"J"
")"
"V", reinterpret_cast<void*>(ProxySettingsChanged) },
  };
  const int kMethodsProxyChangeListenerSize =
      arraysize(kMethodsProxyChangeListener);

  if (env->RegisterNatives(g_ProxyChangeListener_clazz,
                           kMethodsProxyChangeListener,
                           kMethodsProxyChangeListenerSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace net

#endif  // org_chromium_net_ProxyChangeListener_JNI