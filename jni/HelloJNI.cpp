/*
 * HelloJNI.cpp

 *
 *  Created on: May 16, 2016
 *      Author: Xiangyu
 */

#include <jni.h>
#include <iostream>
#include "HelloJNI.h"
JNIEXPORT void JNICALL Java_HelloJNI_sayHello
  (JNIEnv *env, jobject thisObj) {
	std::cout << "Hello World!\n";
	return;
}
