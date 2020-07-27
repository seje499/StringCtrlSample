#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();
	CMyString(const CMyString & rhs);
	explicit CMyString(const char* pszParam);
	CMyString(CMyString&&rhs);

private:
	// 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
	char* m_pszData;
	// 저장된 문자열의 길이
	int m_nLength;
public:
	int SetString(const char* pszParam);
	const char* GetString() const;
	void Release();
	CMyString& operator=(const CMyString &rhs);
	
	operator char*(void) const;

	int GetLength() const;

	int Append(const char* pszParam);

	CMyString operator+(const CMyString &rhs);
	CMyString& operator+=(const CMyString &rhs);

	
	char& operator[](int rhs);

	char operator[](int& rhs) const;

	int operator==(const CMyString &rhs);

	int operator!=(const CMyString &rhs);

};

