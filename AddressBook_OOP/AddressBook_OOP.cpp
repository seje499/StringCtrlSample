#include "pch.h"
#include "CMyList.h"
#include "CUserInterface.h"

int main()
{
	CMyList DB;
	CUserInterface UI(DB);
	UI.Run();

	return 0;
}