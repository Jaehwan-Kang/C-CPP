#include "stdafx.h"
#include <iostream>


/*
	�������� ���� C++ ���α׷���
	OOP �ܰ躰 ������Ʈ v.01
*/


using namespace std;
const int NAME_LEN = 20;

void MenuList(void);	// �޴� ȭ��
void MakeID(void);		// ���� ����
void InMoney(void);		// �� ��
void OutMoney(void);	// �� ��
void IdInfo(void);		// ���� ���� ���


// �� ����Ʈ ���� ���� 
typedef struct
{
	int accID;					// ���¹�ȣ
	int	result;					// �� ��
	char custName[NAME_LEN];	// ���̸�
} Account;

Account accArr[100];			// Account ������Ʈ�� �迭 ����
int accNum=0;					// Account ��


// �޴� ���
void MenuList(void)
{
	cout<<"======  Menu  ======"<<endl;
	cout<<"   1. ���� ����"<<endl;
	cout<<"   2. ��     ��"<<endl;
	cout<<"   3. ��     ��"<<endl;
	cout<<"   4. ���� ���"<<endl;
	cout<<"   5.  ��  ��  "<<endl;
	cout<<"===================="<<endl;
}


// ���� ���� �Լ� (����ID, �̸�, �Աݾ�) �� ����
void MakeID(void)		
{
	int id;
	char name[NAME_LEN];
	int in_cash;

	cout<<"[���� ����]"<<endl;
	cout<<"���� ID : "; 
	cin>>id;
	cout<<"�� �� : ";
	cin>>name;
	cout<<"�Աݾ� : ";
	cin>>in_cash;
	cout<<endl;

	accArr[accNum].accID = id;				// �迭 ����
	accArr[accNum].result = in_cash;
	strcpy(accArr[accNum].custName, name);
	accNum++;								// Acount �� ����ó��
}

// �Ա� �Լ�
void InMoney(void)
{
	int money;
	int id;

	cout<<"[�� ��]"<<endl;
	cout<<"����ID : "<<endl;
	cin>>id;
	cout<<"�Աݾ� : "<<endl;
	cin>>money;
	cout<<endl;

	for(int i=0; i<accNum; i++)
	{
		if(accArr[i].accID == id)
		{
			accArr[i].result += money;
			cout<<"�� �� �� ��"<<endl;
			return ;
		}
	}
	cout<<"��ȿ���� ���� ID �Դϴ�."<<endl;
}

// ��� �Լ�
void OutMoney(void)
{
	int money;
	int id;

	cout<<"[�� ��]"<<endl;
	cout<<"����ID : "<<endl;
	cin>>id;
	cout<<"��ݾ� : "<<endl;
	cin>>money;
	cout<<endl;

	for(int i=0; i<accNum; i++)
	{
		if(accArr[i].accID == id)
		{
			if(accArr[i].result < money)
			{
				cout<<"�ܾ� ����"<<endl<<endl;
				return ;
			}	
			
			accArr[i].result -= money;
			cout<<"�� �� �� ��"<<endl;
			return ;
		}
	}
	cout<<"��ȿ���� ���� ID �Դϴ�."<<endl;
}

// �� �� �� ��
void IdInfo(void)
{
	for(int i=0; i<accNum; i++)
	{
		cout<<"=========================="<<endl;
		cout<<"����ID : "<<accArr[i].accID<<endl;
		cout<<"��  �� : "<<accArr[i].custName<<endl;
		cout<<"��  �� : "<<accArr[i].result<<endl;
		cout<<"=========================="<<endl;
	}
}

// ���� �Լ� 
int main(void)
{
	int numChoice;

	while(1)
	{
		MenuList();
		cout<<"���� : ";
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