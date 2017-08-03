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
	/* 
	[실행 예]
	30 20
	Z A
	5.555 1.111
	*/
}