/* 
  -  AccountHandler.cpp
  
  -  made by lupang1085@gmail.com

   - UPDATE
      2017-08-11       =>      ver 0.7
 */
#include "BankingCommonDecl.h"
#include "AccountHandler.h"

 void AccountHandler::MenuList(void) const
{
	cout<<"======  Menu  ======"<<endl;
	cout<<"   1. 계좌 개설"<<endl;
	cout<<"   2. 입     금"<<endl;
	cout<<"   3. 출     금"<<endl;
	cout<<"   4. 계좌 출력"<<endl;
	cout<<"   5.  종  료  "<<endl;
	cout<<"===================="<<endl;
}

void AccountHandler::MakeID(void)		
{
	int selec;

	cout<<"[계좌 종류 선택]"<<endl;
    cout<<"1. 보통 예금 계좌  "<<"2. 신용 신뢰 계좌"<<endl;
	cout<<"선택 : ";  cin>>selec;
    
    if(selec == 1)
        MakeIDNormal();
    else
        MakeIDHigh();
	
}


void AccountHandler::MakeIDNormal(void)
{
	int id;
	char name[NAME_LEN];
	int in_cash;
    int inRate;

	cout<<"[보통 예금 계좌 개설]"<<endl;
	cout<<"계좌 ID : "; cin>>id;
	cout<<"이 름 : "; cin>>name;
	cout<<"입금액 : ";	cin>>in_cash;
    cout<<"이자율 : "; cin>>inRate;
	cout<<endl;

	accArr[accNum++] = new NormalAccount(id, in_cash, name, inRate);
}

void AccountHandler::MakeIDHigh(void)		
{
	int id;
	char name[NAME_LEN];
	int in_cash;
    int inRate;
    int creditRate;

	cout<<"[신용 신뢰 계좌 개설]"<<endl;
	cout<<"계좌 ID : "; cin>>id;
	cout<<"이 름 : "; cin>>name;
	cout<<"입금액 : ";	cin>>in_cash;
    cout<<"이자율 : "; cin>>inRate;
	cout<<"신용등급(1toA , 2toB, 3toC) : "; cin>>creditRate;
    cout<<endl;

    switch(creditRate)
    {
        case 1:
            accArr[accNum++] = new HighCreditAccount(id, in_cash, name, inRate, LV_A);
            break;
        case 2:
            accArr[accNum++] = new HighCreditAccount(id, in_cash, name, inRate, LV_B);
            break;
        case 3:
            accArr[accNum++] = new HighCreditAccount(id, in_cash, name, inRate, LV_C);
            break;
    }
	
}

void AccountHandler::InMoney(void)
{
	int money;
	int id;

	cout<<"[입 금]"<<endl;
	cout<<"계좌ID : ";
	cin>>id;
	cout<<"입금액 : ";
	cin>>money;
	cout<<endl;

	for(int i=0; i<accNum; i++)
	{
		if(accArr[i]->GetID() == id)
		{
			accArr[i]->InMoney(money);
			cout<<"임 금 완 료"<<endl;
			return ;
		}
	}
	cout<<"유효하지 않은 ID 입니다."<<endl;
}

void AccountHandler::OutMoney(void)
{
	int money;
	int id;

	cout<<"[출 금]"<<endl;
	cout<<"계좌ID : ";
	cin>>id;
	cout<<"출금액 : ";
	cin>>money;
	cout<<endl;

	for(int i=0; i<accNum; i++)
	{
		if(accArr[i]->GetID() == id)
		{
			if(accArr[i]->OutMoney(money) == 0)
			{
				cout<<"잔액 부족"<<endl<<endl;
				return ;
			}	

			cout<<"출 금 완 료"<<endl;
			return ;
		}
	}
	cout<<"유효하지 않은 ID 입니다."<<endl;
}

AccountHandler::AccountHandler()
	: accNum(0)
{}

void AccountHandler::IdAllInfo(void) const
{
	for(int i=0; i<accNum; i++)
	{
		accArr[i]->IdInfo();
		cout<<endl;
	}
}

AccountHandler::~AccountHandler()
{
    for(int i=0; i<accNum; i++)
	    delete accArr[i];
}