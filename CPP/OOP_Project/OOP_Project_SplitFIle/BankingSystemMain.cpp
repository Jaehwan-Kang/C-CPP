/* 
  -  BankingSystemMain.cpp
  
  -  made by lupang1085@gmail.com

   - UPDATE
      2017-08-11       =>      ver 0.7
 */

 #include "BankingCommonDecl.h"
 #include "AccountHandler.h"

int main(void)
{
    AccountHandler manager;
	int numChoice;

	while(1)
	{
		manager.MenuList();
		cout<<"선택 : ";
		cin>>numChoice;
		cout<<endl;

		switch(numChoice)
		{
		case 1:
			manager.MakeID();
			break;
		case 2:
			manager.InMoney();
			break;
		case 3:
			manager.OutMoney();
			break;
		case 4:
			manager.IdAllInfo();
			break;
		case 5:
			return 0;
		default:
			cout<<"Illegal selection.."<<endl;

		}
	}
	return 0;
} 