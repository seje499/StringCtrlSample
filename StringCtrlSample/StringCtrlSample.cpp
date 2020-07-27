#include "pch.h"
#include "CMyStringEx.h"
//#include "CMyString.h"

int main()
{
	CMyStringEx strTest;
	strTest.SetString("I am a boy");
	cout << strTest << endl;

	int nIndex = strTest.Find("am");
	cout << "Index: " << nIndex << endl;

	return 0;



	//CMyString strData, strTest;
	//strData.SetString("Hello");
	//strTest.SetString("World");

	//CMyString strNewData(strData);
	//cout << strNewData.GetString() << endl;

	//strNewData = strTest;
	//cout << strNewData.GetString() << endl;
/*
	CMyString strData("Hello");
	::TestFunc(strData);
	::TestFunc(CMyString("World"));
*/

	//TestFunc();
/*
	CMyString strLeft("Hello"), strRight("World"), strResult;
	strResult = strLeft + strRight;
	cout << strResult << endl;

	cout << strLeft << endl;
	strLeft += CMyString("World");
	cout << strLeft << endl;
*/
/*
	CMyString strParam("HelloWorld");
	cout << strParam << endl;
	TestFunc(strParam);
*/
/*
	CMyString strLeft("Test"), strRight("String");
	if (strLeft == strRight)
		cout << "Same" << endl;
	else
		cout << "Diff" << endl;

	strLeft = CMyString("String");

	if (strLeft != strRight)
		cout << "Diff" << endl;

	else
		cout << "same!!!" << endl;
	
	return 0;*/

}

//
//void TestFunc(const CMyString &param)
//{
//	cout << param << endl;
//}
//
//CMyString TestFunc(void)
//{
//	CMyString strTest("testfunc return..");
//	cout << strTest << endl;
//
//	return strTest;
//}
//

//
//void TestFunc(const CMyString &strParam)
//{
//	cout << strParam[0] << endl;
//	cout << strParam[strParam.GetLength() - 1] << endl;
//}
