#include <iostream>
#include <cstring>
/*
	윤성우의 열혈 C++ 프로그래밍
	OOP 단계별 프로젝트 v.06
	2017.08.11
*/

using namespace std;
const int NAME_LEN = 20;

// HighCreditAccount  Level
enum { LV_A = 7, LV_B = 4, LV_C = 2 };
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
    virtual void InMoney(int money);
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
    Account 유도클래스 : NormalAccount
*/
class NormalAccount : public Account
{
private:
    int interestRate;

public:
    NormalAccount(int id, int cash, char * name, int rate)
        : Account(id, cash, name), interestRate(rate)
        {}
    
    virtual void InMoney(int money)
    {
        Account::InMoney(money);
        Account::InMoney(money * (interestRate/100.0));
    }
};

/*
    NormalAccount 유도클래스 : HighCreditAccount
*/
class HighCreditAccount : public NormalAccount
{
private:
    int creditRate;

public:
    HighCreditAccount(int id, int cash, char * name, int rate, int creaditrate)
        :  NormalAccount(id, cash, name, rate), creditRate(creaditrate)
        {}

    virtual void InMoney(int money)
    {
        NormalAccount::InMoney(money);
        Account::InMoney(money * (creditRate/100.0));
    }
};


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

    void MakeIDNormal(void);
    void MakeIDHigh(void);
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