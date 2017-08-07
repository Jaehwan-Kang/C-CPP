//#include "stdafx.h"
#include <iostream>


// 01-1-1
//int main(void)
//{
//	int input;
//	int result = 0;
//
//
//	for(int i=0;i<5;i++)
//	{
//		std::cout<<i + 1<<" 번째 정수 입력: ";
//		std::cin>>input;
//		result += input;
//	}
//
//	std::cout<<"합계 : "<<result<<std::endl;
//
//	return 0; 
//}

// 01-1-2
//int main(void)
//{
//	char name[100];
//	char phone[100];
//
//	std::cout<<"이름 : ";
//	std::cin>>name;
//	std::cout<<"전화번호 : ";
//	std::cin>>phone;
//	
//	std::cout<<"이름은 "<<name<<" 입니다. \n";
//	std::cout<<"전화번호는 "<<phone<<" 입니다."<<std::endl;
//
//	return 0;
//}

// 01-1-3
//int main(void)
//{
//	int dan;
//
//	std::cout<<"출력하고자 하는 구구단은? ";
//	std::cin>>dan;
//
//	for(int i=1; i<=9; i++)
//	{
//		std::cout<<dan<<" X "<<i<<" = "<<dan*i<<std::endl;
//	}
//
//	return 0;
//}

// 01-1-4
//int main(void)
//{
//	int sell = 0;
//	int result = 0;
//
//	while(1)
//	{
//
//			
//		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end) : ";
//		std::cin>>sell;
//		
//		if(sell==-1)
//		{
//			std::cout<<"프로그램을 종료합니다."<<std::endl;
//			break;
//		}
//		
//		result = 50 + sell * 0.12;
//		
//		std::cout<<"이번 달 급여 : "<<result<<"만원"<<std::endl;
//	}
//  return 0;
//}

/*
// 01-2
void swap(int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(char * a, char * b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;    
}

void swap(double * a, double *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;    
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout<<num1<<' '<<num2<<std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout<<ch1<<' '<<ch2<<std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout<<dbl1<<' '<<dbl2<<std::endl;

	return 0;

//	[실행 예]
//	30 20
//	Z A
//	5.555 1.111

}  */

// 02-1-3
//using namespace std;
//
//void SwapPointer(int *(&pref1), int *(&pref2))
//{
//	int * ptr = pref1;
//	pref1 = pref2;
//	pref2 = ptr;
//}
//
//int main(void)
//{
//	int num1 = 5;
//	int *ptr1 = &num1;
//
//	int num2 = 10;
//	int *ptr2 = &num2;
//
//	cout<<*ptr1<<endl;
//	cout<<*ptr2<<endl;
//
//	SwapPointer(ptr1, ptr2);
//	cout<<*ptr1<<endl;
//	cout<<*ptr2<<endl;
//
//	return 0;
//
//}

// // 03-1
// using namespace std;

// struct Point
// {
//     int xpos;
//     int ypos;

//     void MovePos(int x, int y)
//     {
//         xpos += x;
//         ypos += y;
//     }
//     void AddPoint(const Point &pos)
//     {
//         xpos += pos.xpos;
//         ypos += pos.ypos;
//     }
//     void ShowPosition()
//     {
//         cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
//     }
// };

//  int main(void)
// {
//     Point pos1 = {12, 4};
//     Point pos2 = {20, 30};

//     pos1.MovePos(-7, 10);
//     pos1.ShowPosition();

//     pos1.AddPoint(pos2);
//     pos1.ShowPosition();

//     return 0;
// }


// 03-2-1
/*
using namespace std;

class Calculator
{
private:
	int numOfAdd;
	int numOfMin;
	int numOfMul;
	int numOfDiv;


public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);
	void ShowOpCount();
};

void Calculator::Init()
{
	numOfAdd = 0;
	numOfMin = 0;
	numOfMul = 0;
	numOfDiv = 0;
}

double Calculator::Add(double num1, double num2)
{
	numOfAdd++;
	return num1 + num2;
}

double Calculator::Min(double num1, double num2)
{
	numOfMin++;
	return num1 - num2;
}

double Calculator::Mul(double num1, double num2)
{
	numOfMul++;
	return num1 * num2;
}
double Calculator::Div(double num1, double num2)
{
	numOfDiv++;
	return num1 / num2;
}

void Calculator::ShowOpCount()
{
	cout<<"덧셈 : "<<numOfAdd<<' ';
	cout<<"뺄셈 : "<<numOfMin<<' ';
	cout<<"곱셈 : "<<numOfMul<<' ';
	cout<<"나눗셈 : "<<numOfDiv<<endl;
}

int main(void)
{
	Calculator cal;
	cal.Init();
	cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
	cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
	cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
	cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
	cal.ShowOpCount();
	
	return 0;
}
*/

// 03-2-2
// using namespace std;

// class Printer
// {
// private:
//     char str[100];

// public:
//     //SetString(char value); 
//     void SetString(char * value); 
//     void ShowString();
// };

// //char Printer::SetString(char value);
// void Printer::SetString(char * value)
// {
//     //str = value;
//     strcpy(str, value);
// }

// void Printer::ShowString()
// {
//     cout<<str<<endl;
// }

// int main(void)
// {
//     Printer pnt;
//     pnt.SetString("Hello world!");
//     pnt.ShowString();

//     pnt.SetString("I Love C++");
//     pnt.ShowString();
//     return 0;
// }

