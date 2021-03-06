#include <iostream>
#include <cstring>

/*
	윤성우의 열혈 C++ 프로그래밍
	OOP 단계별 프로젝트 v.04
	2017.08.09
*/


using namespace std;
const int NAME_LEN = 20;

void MenuList(void);
void MakeID(void);
void InMoney(void);
void OutMoney(void);
void IdInfo(void);


// 고객 리스트 저장 영역 (ver0.3에서 const 선언 추가)
class Account
{
private:
	int accID;
	int result;
	char * custname;
public:
	Account(int id, int cash, char * name)
		: accID(id), result(cash)
	{
		custname = new char[strlen(name) + 1];
		strcpy(custname, name);
	}

	Account(const Account& ref)
		: accID(ref.accID), result(ref.result)
	{
		custname = new char[strlen(ref.custname) + 1];
		strcpy(custname, ref.custname);
	}

	int GetID() const
	{
		return accID;
	}

	void InMoney(int money)
	{
		result += money;
	}

	int OutMoney(int money)
	{
		if(result < money)
			return 0;

		result -= money;
		return money;
	}

	void IdInfo() const
	{
		cout<<"계좌ID : "<<accID<<endl;
		cout<<"이  름 : "<<custname<<endl;
		cout<<"잔  액 : "<<result<<endl;
	}

	~Account()
	{
		delete []custname;
	}

};

Account * accArr[100];			// Account 고객리스트용 배열 선언
int accNum=0;					// Account 수


// 메뉴 출력
void MenuList(void)
{
	cout<<"======  Menu  ======"<<endl;
	cout<<"   1. 계좌 개설"<<endl;
	cout<<"   2. 입     금"<<endl;
	cout<<"   3. 출     금"<<endl;
	cout<<"   4. 계좌 출력"<<endl;
	cout<<"   5.  종  료  "<<endl;
	cout<<"===================="<<endl;
}


// 계좌 개설 함수 (계좌ID, 이름, 입금액) 및 저장
void MakeID(void)		
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

// 입금 함수
void InMoney(void)
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

// 출금 함수
void OutMoney(void)
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

// 계 좌 출 력
void IdInfo(void)
{
	for(int i=0; i<accNum; i++)
	{
		accArr[i]->IdInfo();
		cout<<endl;
	}
}

// 메인 함수 
int main(void)
{
	int numChoice;

	while(1)
	{
		MenuList();
		cout<<"선택 : ";
		cin>>numChoice;
		cout<<endl;

		switch(numChoice)
		{
		case 1:
			MakeID();
			break;
		case 2:
			InMoney();
			break;
		case 3:
			OutMoney();
			break;
		case 4:
			IdInfo();
			break;
		case 5:
			for(int i=0; i<accNum; i++)
				delete accArr[i];
			return 0;
		default:
			cout<<"Illegal selection.."<<endl;

		}
	}
	return 0;
}