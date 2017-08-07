#include "stdafx.h"
#include <iostream>

//// NameSp1.cpp
//namespace BestComImp1
//{
//	void SimpleFunc(void)
//	{
//		std::cout<<"BestCom 이 정의한 함수"<<std::endl;
//	}
//}
//
//namespace ProgComImp1
//{
//	void SimpleFunc(void)
//	{
//		std::cout<<"ProgCom 이 정의한 함수"<<std::endl;
//	}
//}
//
//int main(void)
//{
//	BestComImp1::SimpleFunc();
//	ProgComImp1::SimpleFunc();
//
//	return 0;
//}

//// NameSp2.cpp
//namespace BestComImp1
//{
//	void SimpleFunc(void);
//}
//namespace ProgComImp1
//{
//	void SimpleFunc(void);
//
//}
//
//int main(void)
//{
//	BestComImp1::SimpleFunc();
//	ProgComImp1::SimpleFunc();
//	return 0;
//}
//
//void BestComImp1::SimpleFunc(void)
//{
//	std::cout<<"BestCom 이 정의한 함수"<<std::endl;
//}
//
//void ProgComImp1::SimpleFunc(void)
//{
//	std::cout<<"ProgCom 이 정의한 함수"<<std::endl;
//}

//// NameSp3.cpp
//namespace BestComImp1
//{
//	void SimpleFunc(void);
//}
//
//namespace BestComImp1
//{
//	void PrettyFunc(void);
//}
//
//namespace ProgComImp1
//{
//	void SimpleFunc(void);
//}
//
//int main(void)
//{
//	BestComImp1::SimpleFunc();
//	return 0;
//}
//
//void BestComImp1::SimpleFunc(void)
//{
//	std::cout<<"BestCom 이 정의한 함수"<<std::endl;
//	PrettyFunc();
//	ProgComImp1::SimpleFunc();
//}
//
//void BestComImp1::PrettyFunc(void)
//{
//	std::cout<<"So Pretty!!"<<std::endl;
//}
//
//void ProgComImp1::SimpleFunc(void)
//{
//	std::cout<<"ProgCom 이 정의한 함수"<<std::endl;
//}

// UsingDcl1.cpp
//namespace Hybrid
//{
//	void HybFunc(void)
//	{
//		std::cout<<"So simple function!"<<std::endl;
//		std::cout<<"In namespace Hybrid!"<<std::endl;
//	}
//}
//
//int main(void)
//{
//	using Hybrid::HybFunc;
//	HybFunc();
//
//	return 0;
//}

// UsingDcl2.cpp
//using std::cin;
//using std::cout;
//using std::endl;
//using namespace std;
//
//int main(void)
//{
//	int num = 20;
//	cout<<"Hello World!"<<endl;
//	cout<<"Hello "<<"World!"<<endl;
//	cout<<num<<' '<<'A';
//	cout<<' '<<3.14<<endl;
//
//	return 0;
//}

//// NameAlias.cpp
//using namespace std;
//
//namespace AAA
//{
//	namespace BBB
//	{
//		namespace CCC
//		{
//			int num1;
//			int num2;
//		}
//	}
//}
//
//int main(void)
//{
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//
//	namespace ABC = AAA::BBB::CCC;
//	cout<<ABC::num1<<endl;
//	cout<<ABC::num2<<endl;
//	return 0;
//}