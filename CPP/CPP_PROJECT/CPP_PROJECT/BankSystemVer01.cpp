#include "stdafx.h"
#include <iostream>


/*
	윤성우의 열혈 C++ 프로그래밍
	OOP 단계별 프로젝트 v.01
*/


using namespace std;
const int NAME_LEN = 20;

void MenuList(void);	// 메뉴 화면
void MakeID(void);		// 계좌 개설
void InMoney(void);		// 입 금
void OutMoney(void);	// 출 금
void IdInfo(void);		// 계좌 정보 출력


// 고객 리스트 저장 영역 
typedef struct
{
	int accID;					// 계좌번호
	int	result;					// 잔 액
	char custName[NAME_LEN];	// 고객이름
} Account;

Account accArr[100];			// Account 고객리스트용 배열 선언
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

	accArr[accNum].accID = id;				// 배열 저장
	accArr[accNum].result = in_cash;
	strcpy(accArr[accNum].custName, name);
	accNum++;								// Acount 수 증가처리
}

// 입금 함수
void InMoney(void)
{
	int money;
	int id;

	cout<<"[입 금]"<<endl;
	cout<<"계좌ID : "<<endl;
	cin>>id;
	cout<<"입금액 : "<<endl;
	cin>>money;
	cout<<endl;

	for(int i=0; i<accNum; i++)
	{
		if(accArr[i].accID == id)
		{
			accArr[i].result += money;
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
	cout<<"계좌ID : "<<endl;
	cin>>id;
	cout<<"출금액 : "<<endl;
	cin>>money;
	cout<<endl;

	for(int i=0; i<accNum; i++)
	{
		if(accArr[i].accID == id)
		{
			if(accArr[i].result < money)
			{
				cout<<"잔액 부족"<<endl<<endl;
				return ;
			}	
			
			accArr[i].result -= money;
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
		cout<<"=========================="<<endl;
		cout<<"계좌ID : "<<accArr[i].accID<<endl;
		cout<<"이  름 : "<<accArr[i].custName<<endl;
		cout<<"잔  액 : "<<accArr[i].result<<endl;
		cout<<"=========================="<<endl;
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
			return 0;
		default:
			cout<<"Illegal selection.."<<endl;

		}
	}
	return 0;
}