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
	// ���ڿ��� �����ϱ� ���� ���� �Ҵ��� �޸𸮸� ����Ű�� ������
	char* m_pszData;
	// ����� ���ڿ��� ����
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

	virtual void OnSetString(char * pszData, int nLength);

};

