// stdafx.cpp : source file that includes just the standard includes
//  stdafx.pch will be the pre-compiled header
//  stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
#include "resource.h"

#ifdef _ATL_STATIC_REGISTRY
#include <statreg.h>
#include <statreg.cpp>
#endif

#include <atlimpl.cpp>
#include <atlctl.cpp>
#include <atlwin.cpp>

// ��� ���������� ������ ������ ���� � ����� system\\GlobalMethods.cpp
//
// ������� ��� ��������� stdafx.cpp ����� ���������� ����� �������, � �� ������ �����, 
// ��� ��� ��������� � ���������� ������ ������ :)
// ����� stdafx.h � stdafx.cpp ����� ������ �� ������

//_____________________________________________________________________________
//
void DispatchToValue(IUnknown** ppUnk, CValue* pVal)
{
	pVal->Reset();
	
	IDispatchPtr pDisp = ppUnk[0];
	
	if(pDisp != NULL)
	{
		VARIANT var;
		
		var.vt		 = VT_DISPATCH;
		var.pdispVal = pDisp;
		
		DISPPARAMS disp = {&var, NULL, 1, 0};
		
		UINT ui;
		((CBLMyEx*)NULL)->DispParamToValueEx(&pVal, &disp, &ui);
		
		pDisp->Release();
	}
}