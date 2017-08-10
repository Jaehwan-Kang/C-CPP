#include <iostream>
#include <cstring>

/*
	윤성우의 열혈 C++ 프로그래밍
	OOP 단계별 프로젝트 v.05
	2017.08.10
*/

using namespace std;
const int NAME_LEN = 20;

   /*
     *  클래스 이름 : Account
     *
     *  클래스 유형 : Entity 클래스 
     */
class Account
{
private:
	int accID;
	int result;
	char * custname;
public:
    Account(int id, int cash, char * name);
    Account(const Account& ref);

    int GetID() const;
    void InMoney(int money);
    int OutMoney(int money);
    void IdInfo() const;
    ~Account();
};

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

   /*
    *  클래스 이름 : AccountHandler
    *
    *  클래스 유형 : Control 클래스 
    */

class AccountHandler
{
private:
    Account * accArr[100];      // Account 고객리스트용 배열 선언
    int accNum;                     // Account 수
public:
    AccountHandler();
    void MenuList(void) const;
    void MakeID(void);
    void InMoney(void);
    void OutMoney(void);
    void IdAllInfo(void) const;
    ~AccountHandler();
};

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
	int id;
	char name[NAME_LEN];
	int in_cash;

	cout<<"[계좌 개설]"<<endl;
	cout<<"계좌 ID : "; 
	cin>>id;
	cout<<"이 름 : ";
	cin>>name;
	cout<<"입금액 : ";
	cin>>in_cash;
	cout<<endl;

	accArr[accNum++] = new Account(id, in_cash, name);
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


/*
 *   변경된 클래스에 의한 main 함수
 */

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