#include "pch.h"
#include "CUserInterface.h"
#include "CMyList.h"

CUserInterface::CUserInterface(CMyList &rList) : m_List(rList)
{

}

CUserInterface::~CUserInterface()
{

}

void CUserInterface::Add(void)
{
}

void CUserInterface::Search(void)
{
}

void CUserInterface::Remove(void)
{
}

int CUserInterface::PrintUI(void)
{
	return 0;
}

int CUserInterface::Run(void)
{
	int nMenu = 0;

	while (nMenu = PrintUI() != 0)
	{
		switch (nMenu)
		{
		case 1:
			Add();
			break;
		case 2:
			Search();
			break;
		case 3:
			PrintAll();
			break;
		case 4:
			Remove();
			break;
		}
	}

	return nMenu;
}
