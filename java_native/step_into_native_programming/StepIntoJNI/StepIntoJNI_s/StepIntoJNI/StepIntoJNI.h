// StepIntoJNI.h : main header file for the StepIntoJNI DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CStepIntoJNIApp
// See StepIntoJNI.cpp for the implementation of this class
//

class CStepIntoJNIApp : public CWinApp
{
public:
	CStepIntoJNIApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
