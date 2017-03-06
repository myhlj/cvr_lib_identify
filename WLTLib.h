/*
**Copyright (c) 2011,����������ʥ�������޹�˾
**All rights reserved.
**WLTLib.cpp
Revision history:
// v1.0.4.2: �ʿ�����汾 [2011.07.13 caizhiwen]
// v1.0.4.3: �޸����ͼ���λһ������ [2011.09.07 zhangzexiang]
// v1.1.0.0: ����������Ȩ�����кš�ʱ�䣩[2011.09.17 caizhiwen��liuyan]
// v1.1.0.1: ����CV_InitializeEx������ָ����Ȩ�ļ��������ƣ���ȫ��·����[2011.09.19 caizhiwen]
*/

#ifndef CV_WLTLIB
#define CV_WLTLIB

#define CV_ERR_NONE              1
#define CV_ERR_LICENSE           2
#define CV_ERR_HDADER            3
#define CV_ERR_DATA              4
#define CV_ERR_UNINITIALIZED     5

#define CV_FORMAT_BMP            0
#define CV_FORMAT_RAW            1

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WIN32
#define __STDCALL __stdcall
#else
#define __STDCALL 
#endif

	//************************************
	// Method:    CV_Initialize
	// FullName:  CV_Initialize
	// Access:    public 
	// Returns:   int					��CV_ERR_XXX����
	// Parameter: const char * pLicense	��ȫģ����
	// Parameter: const int * pBaseData	С���任����
	// Desc:      ��ʼ������������ʱ����һ��
	//************************************
	int __STDCALL CV_Initialize(const char * pLicense, const int * pBaseData);

	//************************************
	// Method:    CV_InitializeEx
	// FullName:  CV_InitializeEx
	// Access:    public 
	// Returns:   int					��CV_ERR_XXX����
	// Parameter: const char * pLicense	��ȫģ����
	// Parameter: const int * pBaseData	С���任����
	// Parameter: const char * pLicFileName ��Ȩ�ļ��������ƣ���·����
	// Desc:      ��ʼ������������ʱ����һ��
	//************************************
	int __STDCALL CV_InitializeEx(const char * pLicense, const int * pBaseData, const char * pLicFileName);

	//************************************
	// Method:    CV_Finalize
	// FullName:  CV_Finalize
	// Access:    public 
	// Returns:   int					��CV_ERR_XXX����
	// Desc:      ��ֹ�������˳�ʱ����һ��
	//************************************
	int __STDCALL CV_Finalize();

	//************************************
	// Method:    CV_Decode
	// FullName:  CV_Decode
	// Access:    public 
	// Returns:   int					��CV_ERR_XXX����
	// Parameter: unsigned char * pData ����������
	// Parameter: int length			���������ݳ���
	// Parameter: unsigned char * pOutBuffer	��������������������ⲿ��������㹻�ռ�
	// Parameter: int format			���������ʽ����CV_FORMAT_XXX����	
	// Parameter: int outLength			ʵ��������ݳ���
	// Desc:      ���뺯������֧�ֶ��̵߳���
	//************************************

	int __STDCALL CV_Decode(unsigned char *pData, 
		int length, 
		unsigned char * pOutBuffer, 
		int format, 
		int *outLength);

	//************************************
	// Method:    CV_ErrorInfo
	// FullName:  CV_ErrorInfo
	// Access:    public 
	// Returns:   void
	// Parameter: int errCode			������
	// Parameter: char * errMSg			����˵�����ڴ����ⲿ���䣬����128�ֽ�
	// Desc:      ��������ϸ��Ϣ˵��
	//************************************
	void __STDCALL CV_ErrorInfo(int errCode, char * errMSg);

	//************************************
	// Method:    CV_VersionInfo
	// FullName:  CV_VersionInfo
	// Access:    public 
	// Returns:   void
	// Parameter: char * version		�汾˵�����ڴ����ⲿ���䣬����128�ֽ�
	// Desc:      �汾��Ϣ
	//************************************
	void __STDCALL CV_VersionInfo(char * version);


#ifdef __cplusplus
}
#endif

#endif	// CV_WLTLIB
