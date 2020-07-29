#pragma once

class CUserInterface
{
	class CMyList;

public:
	CUserInterface(CMyList &rList);
	~CUserInterface(void);
	void Add(void);

protected:
	CMyList &m_List;

public:
	void Search(void);
	void Remove(void);
	int PrintUI(void);

	int Run(void);
};