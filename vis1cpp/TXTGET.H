// txtget.h
#ifndef TXTGET_H
	#define TXTGET_H

class CTxtGet
{
// 	// ��� ������ � ��������, �� ������������ � �����
// 	// ��, ������ ����������, ��������, ������� � ��������� ��������
// 	// ������, �� ��� ����� � ����� TypedText
// 	// static BOOL CConfigCont::IDToTextModule(id,kind,path,retVal,hz);
// 	typedef BOOL (*PIDTOTEXT)(long,char const *,class CString &,class CModuleCont**,int);
// 	// ��� ������������ � �������� ������.
// 	// CModuleCont::GetTextDocument,CTypedCont::GetTextDocument
// 	typedef CBodyTextDoc* (CDocument::*PGETTD)(void);
// 	
// 	// ��� ������ � �������
// 	// static BOOL CConfigCont::IDToPath(id,kind,path,retVal,hz);
// 	typedef int(*PIDTOPATH)(long,char const *,class CString &,class CTypedCont**,int);
// 	// ��� �������� ����
// 	// CTypedCont::GetWorkBook()
// 	typedef CWorkBookDoc* (CDocument::*PGETWB)();
// 	
// 	// �� ��������� ����� ������ void* � ��������� �� ����� ������...

public:
	//CString GetText(const CString& path);
	CString GetGMText() const;

	static void Init();

// private:
// 	static HINSTANCE m_h7;
// 	static PIDTOTEXT m_pIdToText;
// 	static PIDTOPATH m_pIdToPath;
// 	static PGETTD m_pGetTD;
// 	static PGETWB m_pGetWB;
// 	union PtrConv{
// 		void* pV;
// 		PGETTD pGetTextDoc;
// 		//PGETWB pGetWorkBook;
// 	};
};
#endif