/* 
  -  Account.cpp
  
  -  made by lupang1085@gmail.com

   - UPDATE
      2017-08-11       =>      ver 0.7
 */
 
#include "BankingCommonDecl.h"
#include "Account.h"

 Account::Account(int id, int cash, char * name)
	: accID(id), result(cash)
{
	custname = new char[strlen(name) + 1];
	strcpy(custname, name);
}

Account::Account(const Account& ref)
	: accID(ref.accID), result(ref.result)
{
	custname = new char[strlen(ref.custname) + 1];
	strcpy(custname, ref.custname);
}

int Account::GetID() const
{
	return accID;
}

void Account::InMoney(int money)
{
	result += money;
}

int Account::OutMoney(int money)
{
	if(result < money)
		return 0;

	result -= money;
	return money;
}

void Account::IdInfo() const
{
	cout<<"계좌ID : "<<accID<<endl;
	cout<<"이  름 : "<<custname<<endl;
	cout<<"잔  액 : "<<result<<endl;
}

Account::~Account()
{
	delete []custname;
}