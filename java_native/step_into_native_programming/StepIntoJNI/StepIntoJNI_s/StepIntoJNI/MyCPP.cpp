#include "stdafx.h"		//This shoule be included.
#include <jni.h>		//This should always include on every CPP file that "MyHeader.h" included.
#include "MyHeader.h"

JNIEXPORT jdouble JNICALL Java_com_srg_mynatives_MyNative_getTotal(JNIEnv *env, jobject object, jdouble val1, jdouble val2){
	//NOTE: jdouble is a typedef or a name that represent "double" type therefore you don't need to cast or convert the type.
	return (val1 + val2);
}