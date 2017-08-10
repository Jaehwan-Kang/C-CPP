//#include "stdafx.h"
#include <iostream>
#include <cstring>


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

// 07-2-1
// using namespace std;
// class Rectangle
// {
// private:
// 	int width;
// 	int height;
// public:
// 	Rectangle(int wid, int hei)	
// 		: width(wid), height(hei)
// 	{ }
// 	void ShowAreaInfo()
// 	{
// 		cout<<"면적 : "<<width * height<<endl;
// 	}

// };

// class Square : public Rectangle
// {
// public:
// 	Square(int side) 
// 		: Rectangle(side, side)
// 	{ }
// };

// int main(void)
// {
// 	Rectangle rec(4, 3);
// 	rec.ShowAreaInfo();

// 	Square sqr(7);
// 	sqr.ShowAreaInfo();
// 	return 0;
// }
// /* 
// 	 실행 예   
// 	면적 : 12
// 	면적 : 49 
// */

// // 07-2-2
// using namespace std;
// class Book
// {
// private:
// 	char* title;
// 	char* isbn;
// 	int price;
// public:
// 	Book(char* tt, char* ii, int pp)
// 		: price(pp)
// 	{
// 		this->title = new char[strlen(tt) + 1];
// 		this->isbn = new char[strlen(ii) + 1];
// 		strcpy(this->title, tt);
// 		strcpy(this->isbn, ii);
// 	}

// 	void ShowBookInfo()
// 	{
// 		cout<<"제목 : "<<title<<endl;
// 		cout<<"ISBN : "<<isbn<<endl;
// 		cout<<"가격: "<<price<<endl;
// 	}
// 	~Book()
// 	{
// 		delete []title;
// 		delete []isbn;
// 	}
// };

// class Ebook : public Book
// {
// private:
// 	char* DRMKey;
// public:
// 	Ebook(char* tt, char* ii, int pp, char* key)
// 		: Book(tt, ii, pp)
// 	{
// 		DRMKey = new char[strlen(key) + 1];
// 		strcpy(DRMKey, key);
// 	}

// 	void ShowEBookInfo()
// 	{
// 		ShowBookInfo();
// 		cout<<"인증키"<<DRMKey<<endl;
// 	}

// 	~Ebook()
// 	{
// 		delete []DRMKey;
// 	}
// };

// int main(void)
// {
// 	Book book("좋은 C++", "555-12345-890-0", 20000);
// 	book.ShowBookInfo();
// 	cout<<endl;
// 	Ebook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
// 	ebook.ShowEBookInfo();
// 	return 0;
// 	/*
// 	실행 예
// 	제목 : 좋은 C++
// 	ISBN : 555-12345-890-0
// 	가격: 20000
	
// 	제목 : 좋은 C++ ebook
// 	ISBN : 555-12345-890-1
// 	가격: 20000
// 	인증키 : fdx9w0i8kiw
// 	*/
// }

// 08-01
using namespace std;

// 최상위 고용인 클래스
class Employee
{
private:
	char name[100];
public:
	Employee(char * name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout<<"name : "<<name<<endl;
	}

	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;
};

// 고용인의 유도클래스(정규직)
class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(char * name, int money)
		: Employee(name), salary(money)
	{}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"salary: "<<GetPay()<<endl<<endl;
	}
};

// 고용인의 유도클래스(임시직)
class TemporaryWorker : public Employee
{
private:
	int WorkTime;
	int payPerHour;
public:
	TemporaryWorker(char * name, int pay)
		: Employee(name), WorkTime(0), payPerHour(pay)
	{}

	void AddWorkTime(int time)
	{
		WorkTime += time;
	}
	int GetPay() const
	{
		return WorkTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"salary : "<<GetPay()<<endl<<endl;
	}
};

// 정규직의 유도클래스(영업직)
class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(char * name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{ }

	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay() const
	{
		return PermanentWorker::GetPay()
			+ (int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"salary : "<<GetPay()<<endl<<endl;
	}
};

namespace RISK_LEVEL
{
	enum { RISK_A = 30, RISK_B = 20, RISK_C = 10 };
}

// 영업직의 유도클래스(특수 영업직)
class ForeignSaleWorker : public SalesWorker
{
private:
	const int riskLevel;
public:
	ForeignSaleWorker(char * name, int money, double ratio, int risk)
		: SalesWorker(name, money, ratio), riskLevel(risk)
	{}
	int GetriskPay() const
	{
		return (int)(SalesWorker::GetPay() * (riskLevel/100.0));
	}
	int GetPay() const
	{
		return SalesWorker::GetPay() + GetriskPay();
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"salary : "<<SalesWorker::GetPay()<<endl;
		cout<<"risk pay: "<<GetriskPay()<<endl;
		cout<<"sum : "<<GetPay()<<endl<<endl;
	}

};

//  기능 영역으로 핸들러클래스 or  컨트롤 클래스 
class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{}

	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const
	{

		for(int i=0; i<empNum; i++)
			empList[i]->ShowSalaryInfo();

	}

	void ShowTotalSalary() const
	{
		int sum = 0;

		for(int i=0; i<empNum; i++)
			sum += empList[i]->GetPay();

		cout<<"salary sum: "<<sum<<endl;
	}

	~EmployeeHandler()
	{
		for(int i =0; i<empNum; i++)
			delete empList[i];
	}
};

// 메인 함수
int main(void)
{
	// 핸들러 클래스 객체 생성
	EmployeeHandler handler;

	//// 정규직 등록
	//handler.AddEmployee(new PermanentWorker("KIM", 1000));
	//handler.AddEmployee(new PermanentWorker("LEE", 1500));

	//// 임시직 등록
	//TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	//alba->AddWorkTime(5);
	//handler.AddEmployee(alba);

	//// 영업직 등록
	//SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	//seller->AddSalesResult(7000);
	//handler.AddEmployee(seller);

	// 특수 영업직 등록
	ForeignSaleWorker * fseller1 = new ForeignSaleWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000);
	handler.AddEmployee(fseller1);

	ForeignSaleWorker * fseller2 = new ForeignSaleWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000);
	handler.AddEmployee(fseller2);

	ForeignSaleWorker * fseller3 = new ForeignSaleWorker("LEE", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000);
	handler.AddEmployee(fseller3);

	// 이번달 지불할 급여 정보
	handler.ShowAllSalaryInfo();

	//// 지불할 급여의 총합
	//handler.ShowTotalSalary();

	return 0;
}