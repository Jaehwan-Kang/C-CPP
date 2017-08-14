//#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

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
// using namespace std;

// // 최상위 고용인 클래스
// class Employee
// {
// private:
// 	char name[100];
// public:
// 	Employee(char * name)
// 	{
// 		strcpy(this->name, name);
// 	}
// 	void ShowYourName() const
// 	{
// 		cout<<"name : "<<name<<endl;
// 	}

// 	virtual int GetPay() const = 0;
// 	virtual void ShowSalaryInfo() const = 0;
// };

// // 고용인의 유도클래스(정규직)
// class PermanentWorker : public Employee
// {
// private:
// 	int salary;
// public:
// 	PermanentWorker(char * name, int money)
// 		: Employee(name), salary(money)
// 	{}

// 	int GetPay() const
// 	{
// 		return salary;
// 	}

// 	void ShowSalaryInfo() const
// 	{
// 		ShowYourName();
// 		cout<<"salary: "<<GetPay()<<endl<<endl;
// 	}
// };

// // 고용인의 유도클래스(임시직)
// class TemporaryWorker : public Employee
// {
// private:
// 	int WorkTime;
// 	int payPerHour;
// public:
// 	TemporaryWorker(char * name, int pay)
// 		: Employee(name), WorkTime(0), payPerHour(pay)
// 	{}

// 	void AddWorkTime(int time)
// 	{
// 		WorkTime += time;
// 	}
// 	int GetPay() const
// 	{
// 		return WorkTime * payPerHour;
// 	}
// 	void ShowSalaryInfo() const
// 	{
// 		ShowYourName();
// 		cout<<"salary : "<<GetPay()<<endl<<endl;
// 	}
// };

// // 정규직의 유도클래스(영업직)
// class SalesWorker : public PermanentWorker
// {
// private:
// 	int salesResult;
// 	double bonusRatio;
// public:
// 	SalesWorker(char * name, int money, double ratio)
// 		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
// 	{ }

// 	void AddSalesResult(int value)
// 	{
// 		salesResult += value;
// 	}

// 	int GetPay() const
// 	{
// 		return PermanentWorker::GetPay()
// 			+ (int)(salesResult * bonusRatio);
// 	}

// 	void ShowSalaryInfo() const
// 	{
// 		ShowYourName();
// 		cout<<"salary : "<<GetPay()<<endl<<endl;
// 	}
// };

// namespace RISK_LEVEL
// {
// 	enum { RISK_A = 30, RISK_B = 20, RISK_C = 10 };
// }

// // 영업직의 유도클래스(특수 영업직)
// class ForeignSaleWorker : public SalesWorker
// {
// private:
// 	const int riskLevel;
// public:
// 	ForeignSaleWorker(char * name, int money, double ratio, int risk)
// 		: SalesWorker(name, money, ratio), riskLevel(risk)
// 	{}
// 	int GetriskPay() const
// 	{
// 		return (int)(SalesWorker::GetPay() * (riskLevel/100.0));
// 	}
// 	int GetPay() const
// 	{
// 		return SalesWorker::GetPay() + GetriskPay();
// 	}

// 	void ShowSalaryInfo() const
// 	{
// 		ShowYourName();
// 		cout<<"salary : "<<SalesWorker::GetPay()<<endl;
// 		cout<<"risk pay: "<<GetriskPay()<<endl;
// 		cout<<"sum : "<<GetPay()<<endl<<endl;
// 	}

// };

// //  기능 영역으로 핸들러클래스 or  컨트롤 클래스 
// class EmployeeHandler
// {
// private:
// 	Employee* empList[50];
// 	int empNum;
// public:
// 	EmployeeHandler() : empNum(0)
// 	{}

// 	void AddEmployee(Employee* emp)
// 	{
// 		empList[empNum++] = emp;
// 	}

// 	void ShowAllSalaryInfo() const
// 	{

// 		for(int i=0; i<empNum; i++)
// 			empList[i]->ShowSalaryInfo();

// 	}

// 	void ShowTotalSalary() const
// 	{
// 		int sum = 0;

// 		for(int i=0; i<empNum; i++)
// 			sum += empList[i]->GetPay();

// 		cout<<"salary sum: "<<sum<<endl;
// 	}

// 	~EmployeeHandler()
// 	{
// 		for(int i =0; i<empNum; i++)
// 			delete empList[i];
// 	}
// };

// // 메인 함수
// int main(void)
// {
// 	// 핸들러 클래스 객체 생성
// 	EmployeeHandler handler;

// 	//// 정규직 등록
// 	//handler.AddEmployee(new PermanentWorker("KIM", 1000));
// 	//handler.AddEmployee(new PermanentWorker("LEE", 1500));

// 	//// 임시직 등록
// 	//TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
// 	//alba->AddWorkTime(5);
// 	//handler.AddEmployee(alba);

// 	//// 영업직 등록
// 	//SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
// 	//seller->AddSalesResult(7000);
// 	//handler.AddEmployee(seller);

// 	// 특수 영업직 등록
// 	ForeignSaleWorker * fseller1 = new ForeignSaleWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
// 	fseller1->AddSalesResult(7000);
// 	handler.AddEmployee(fseller1);

// 	ForeignSaleWorker * fseller2 = new ForeignSaleWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
// 	fseller2->AddSalesResult(7000);
// 	handler.AddEmployee(fseller2);

// 	ForeignSaleWorker * fseller3 = new ForeignSaleWorker("LEE", 1000, 0.1, RISK_LEVEL::RISK_C);
// 	fseller3->AddSalesResult(7000);
// 	handler.AddEmployee(fseller3);

// 	// 이번달 지불할 급여 정보
// 	handler.ShowAllSalaryInfo();

// 	//// 지불할 급여의 총합
// 	//handler.ShowTotalSalary();

// 	return 0;
// }

// 10-1-1  ~ 3
// using namespace std;

// class Point
// {
// private:
// 	int xpos, ypos;

// public:
// 	Point(int x=0, int y=0) : xpos(x), ypos(y)
// 	{}

// 	void ShowPosition() const
// 	{
// 		cout<<"[ "<<xpos<<", "<<ypos<<" ]"<<endl;
// 	}

// 	// 멤버 함수에 의한 연산자오버로딩 +=
// 	Point& operator+=(const Point &ref)
// 	{
// 		xpos+=ref.xpos;
// 		ypos+=ref.ypos;
// 		return *this;
// 	}
// 	// 멤버 함수에 의한 연산자오버로딩 -=
// 	Point& operator-=(const Point &ref)
// 	{
// 		xpos-=ref.xpos;
// 		ypos-=ref.ypos;
// 		return *this;
// 	}

// 	// 원형 함수 선언에 friend 키워드를 이용해서 클래스 외부에서 함수 호출시 private 멤버 변수 접근 가능 토록 진행 
// 	friend Point operator+(const Point &, const Point &);
// 	friend Point operator-(const Point &, const Point &);
// 	friend bool operator==(const Point &, const Point &);
// 	friend bool operator!=(const Point &, const Point &);

// };

// // 전역함수를 이용한 연산자 오버로딩 +
// Point operator+(const Point &pos1, const Point &pos2)
// {
// 	Point pos(pos1.xpos + pos2.xpos , pos1.ypos + pos2.ypos);
// 	return pos;
// }

// // 전역함수를 이용한 연산자 오버로딩 -
// Point operator-(const Point &pos1, const Point &pos2)
// {
// 	Point pos(pos1.xpos - pos2.xpos , pos1.ypos - pos2.ypos);
// 	return pos;
// }

// // bool 반환형(true, false) 진행
// bool operator==(const Point &pos1, const Point &pos2)	
// {
// 	if(pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
// 		return true;
// 	else
// 		return false;
// }

// // bool 반환형(true, false) 진행
// bool operator!=(const Point &pos1, const Point &pos2)
// {
// 	if(pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
// 		return false;
// 	else
// 		return true;
// }

// int main(void)
// {
// 	Point pos1(20, 30);
// 	Point pos2(5, 7);
// 	Point pos3(5, 7);

// 	(pos1-pos2).ShowPosition();
// 	(pos1+=pos2).ShowPosition();
// 	(pos1-=pos2).ShowPosition();

// 	if(pos2 == pos3)
// 		cout<<"equal"<<endl;
// 	else
// 		cout<<"not equal"<<endl;

// 	if(pos2 != pos3)
// 		cout<<"not equal"<<endl;
// 	else
// 		cout<<"equal"<<endl;

// 	return 0;
// }


// // 10-2-1~2
// using namespace std;

// class Point
// {
// private:
// 	int xpos, ypos;
// public:
// 	Point(int x=0, int y=0) : xpos(x), ypos(y)
// 	{}

// 	void ShowPosition() const
// 	{
// 		cout<<"[ "<<xpos<<", "<<ypos<<" ]"<<endl;
// 	}

// 	Point operator-()
// 	{
// 		Point pos(-xpos, -ypos);
// 		return pos;
// 	}

// 	friend Point operator~(const Point &);
// };

// Point operator~(const Point &ref)
// {
// 	Point pos(ref.ypos, ref.xpos);
// 	return pos;
// }

// int main(void)
// {
// 	Point pos1(9, -7);
// 	pos1.ShowPosition();

// 	Point pos2 = -pos1;
// 	pos2.ShowPosition();

// 	(~pos2).ShowPosition();
// 	pos2.ShowPosition();

// 	return 0;
// }


// // 10-3
// using namespace std;
// class Point
// {
// private:
// 	int xpos, ypos;
// public:
// 	Point(int x=0, int y=0) : xpos(x), ypos(y)
// 	{}

// 	void ShowPosition() const
// 	{
// 		cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
// 	}

// 	friend ostream& operator<<(ostream&, const Point&);
// 	friend istream& operator>>(istream&, Point&);
// };

// ostream& operator<<(ostream& os, const Point& pos)
// {
// 	os<<"["<<pos.xpos<<", "<<pos.ypos<<"]"<<endl;
// 	return os;
// }

// istream& operator>>(istream& is, Point& pos)
// {
// 	is>>pos.xpos>>pos.ypos;
// 	return is;
// }



// int main(void)
// {
// 	Point pos1;
// 	cout<<"x, y 좌표 순으로 입력: ";
// 	cin>>pos1;
// 	cout<<pos1;

// 	Point pos2;
// 	cout<<"x, y 좌표순으로 입력: ";
// 	cin>>pos2;
// 	cout<<pos2;

// 	return 0;

// 	/*
// 	x,y 좌표순으로 입력 : 3 7
// 	[3, 7]
// 	x,y 좌표순으로 입력 : 4 9
// 	[4, 9]
// 	*/
// }

// 11-1-1
// using namespace std;
// class Gun
// {
// private:
// 	int bullet;
// public:
// 	Gun(int bnum) : bullet(bnum)
// 	{ }

// 	void Shot()
// 	{
// 		cout<<"BBANG!"<<endl;
// 		bullet--;
// 	}
// };

// class Police
// {
// private:
// 	int handcuffs;
// 	Gun * pistol;
// public:
// 	Police(int bnum, int bcuff)
// 		: handcuffs(bcuff)
// 	{
// 		if(bnum > 0)
// 			pistol = new Gun(bnum);
// 		else
// 			pistol = NULL;
// 	}

// 	void PutHandcuff()
// 	{
// 		cout<<"SNAP!"<<endl;
// 		handcuffs--;
// 	}
// 	void Shot()
// 	{
// 		if(pistol == NULL)
// 			cout<<"Hut BBANG!"<<endl;
// 		else
// 			pistol->Shot();
// 	}

// 	~Police()
// 	{
// 		if(pistol != NULL)
// 			delete pistol;
// 	}
// };

// // 11-1-1
// using namespace std;

// class Gun
// {
// private:
// 	int bullet;
// public:
// 	Gun(int bnum) : bullet(bnum)
// 	{ }

// 	void Shot()
// 	{
// 		cout<<"BBANG!"<<endl;
// 		bullet--;
// 	}
// };

// class Police
// {
// private:
// 	int handcuffs;
// 	Gun * pistol;
// public:
// 	Police(int bnum, int bcuff)
// 		: handcuffs(bcuff)
// 	{
// 		if(bnum > 0)
// 			pistol = new Gun(bnum);
// 		else
// 			pistol = NULL;
// 	}

// 	Police(const Police& ref)
// 		: handcuffs(ref.handcuffs)
// 	{
// 		if(ref.pistol!=NULL)
// 			pistol = new Gun(*(ref.pistol));
// 		else
// 			pistol = NULL;
// 	}

// 	Police& operator=(const Police& ref)
// 	{
// 		if(pistol != NULL)
// 			delete pistol;
		
// 		if(ref.pistol != NULL)
// 			pistol = new Gun(*(ref.pistol));
// 		else
// 			pistol = NULL;

// 		handcuffs=ref.handcuffs;
// 		return *this;
// 	}
	
// 	void PutHandcuff()
// 	{
// 		cout<<"SNAP!"<<endl;
// 		handcuffs--;
// 	}
// 	void Shot()
// 	{
// 		if(pistol == NULL)
// 			cout<<"Hut BBANG!"<<endl;
// 		else
// 			pistol->Shot();
// 	}

// 	~Police()
// 	{
// 		if(pistol != NULL)
// 			delete pistol;
// 	}
// };

// int main(void)
// {
// 	Police pman1(5, 3);
// 	Police pman2 = pman1;
// 	pman2.PutHandcuff();
// 	pman2.Shot();
		
// 	Police pman3(2, 4);
// 	pman3=pman1;
// 	pman3.PutHandcuff();
// 	pman3.Shot();

// 	return 0;
// }

// // 11-1-2
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


// 	// 복사 생성자 
// 	Book(const Book& ref)
// 		: price(ref.price)
// 	{
// 		title = new char[strlen(ref.title)+1];
// 		isbn = new char[strlen(ref.isbn)+1];
// 		strcpy(title, ref.title);
// 		strcpy(isbn, ref.isbn);
// 	}

// 	// 대입연산자 오버로딩
// 	Book& operator=(const Book& ref)
// 	{
// 		delete []title;
// 		delete []isbn;

// 		title = new char[strlen(ref.title) + 1];
// 		isbn = new char[strlen(ref.isbn) + 1];
// 		strcpy(title, ref.title);
// 		strcpy(isbn, ref.isbn);
// 		return *this;
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

// 	// 복사생성자
// 	Ebook(const Ebook& ref)
// 		: Book(ref)
// 	{
// 		DRMKey = new char[strlen(ref.DRMKey)+1];
// 		strcpy(DRMKey, ref.DRMKey);
// 	}

// 	// 대입연산자 오버로딩
// 	Ebook& operator=(const Ebook& ref)
// 	{
// 		Book::operator=(ref);
// 		delete []DRMKey;
// 		DRMKey = new char[strlen(ref.DRMKey)+1];
// 		strcpy(DRMKey, ref.DRMKey);
// 		return *this;
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
// 	//Book book("좋은 C++", "555-12345-890-0", 20000);
// 	//book.ShowBookInfo();
// 	//cout<<endl;
// 	//Ebook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
// 	//ebook.ShowEBookInfo();
// 	//return 0;

// 	Ebook ebook1("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
// 	Ebook ebook2 = ebook1;
// 	ebook2.ShowEBookInfo();
// 	cout<<endl;

// 	Ebook ebook3("dumy", "dumy", 0, "dumy");
// 	ebook3 = ebook2;
// 	ebook3.ShowEBookInfo();

// 	return 0;
// }

// 11-2-1
// using namespace std;

// class Point
// {
// private:
// 	int xpos, ypos;
// public:
// 	Point(int x=0, int y=0) : xpos(x), ypos(y) {}
// 	friend ostream& operator<<(ostream& os, const Point& pos);
// 	friend ostream& operator<<(ostream& os, const Point* pos);
// };

// ostream& operator<<(ostream& os, const Point& pos)
// {
// 	os<<"["<<pos.xpos<<", "<<pos.ypos<<"]"<<endl;
// 	return os;
// }

// ostream& operator<<(ostream& os, const Point* pos)
// {
// 	os<<"["<<pos->xpos<<", "<<pos->ypos<<"]"<<endl;
// 	return os;
// }

// typedef Point * POINT_PTR;


// class BoundCheckPointArray
// {
// private:
// 	POINT_PTR * arr;
// 	int arrlen;

// 	BoundCheckPointArray(const BoundCheckPointArray& arr) {}
// 	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) {}

// public:
// 	BoundCheckPointArray(int len) : arrlen(len)
// 	{
// 		arr = new POINT_PTR[len];
// 	}

// 	POINT_PTR& operator[] (int idx)
// 	{
// 		if(idx<0 || idx>=arrlen)
// 		{
// 			cout<<"Array index out of bound exception"<<endl;
// 			exit(1);
// 		}
// 		return arr[idx];
// 	}

// 	POINT_PTR operator[] (int idx) const
// 	{
// 		if(idx<0 || idx>=arrlen)
// 		{
// 			cout<<"Array index out of bound exception"<<endl;
// 			exit(1);
// 		}
// 		return arr[idx];
// 	}

// 	int GetArrLen() const { return arrlen; }
// 	~BoundCheckPointArray() { delete []arr; }
// };

// int main(void)
// {
// 	BoundCheckPointArray arr(3);
// 	arr[0]=new Point(3, 4);
// 	arr[1]=new Point(5, 6);
// 	arr[2]=new Point(7, 8);

// 	for(int i=0; i<arr.GetArrLen(); i++)
// 		cout<<*(arr[i]);


// 	delete arr[0];
// 	delete arr[1];
// 	delete arr[2];

// 	return 0;
// }

// 11-2-2
using namespace std;

class BoundCheckIntArray
{
private:
	int * arr;
	int arrlen;
	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {}

public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}

	int& operator[] (int idx)
	{
		if(idx<0 || idx>=arrlen)
		{
			cout<<"Array index out of bound exception"<<endl;
			exit(1);
		}
		return arr[idx];
	}

	int operator[] (int idx) const
	{
		if(idx<0 || idx>=arrlen)
		{
			cout<<"Array index out of bound exception"<<endl;
			exit(1);
		}
		return arr[idx];
	}

	int GetArrlen() const { return arrlen; }
	~BoundCheckIntArray() { delete []arr; }
};

typedef BoundCheckIntArray* BoundCheckIntArrayPTR;

class BoundCheck2DIntArray
{
private:
	BoundCheckIntArray **arr;
	int arrlen;
	BoundCheck2DIntArray(const BoundCheck2DIntArray& arr) {}
	BoundCheck2DIntArray& operator=(const BoundCheck2DIntArray& arr) {}

public:
	BoundCheck2DIntArray(int col, int row) : arrlen(col)
	{
		arr = new BoundCheckIntArrayPTR[col];
		for(int i=0; i<col; i++)
			arr[i] = new BoundCheckIntArray(row);
	}

	BoundCheckIntArray& operator[] (int idx)
	{
		if(idx<0 || idx>=arrlen)
		{
			cout<<"Array index out of bound exception"<<endl;
			exit(1);
		}
		return *(arr[idx]);
	}

	~BoundCheck2DIntArray()
	{
		for(int i=0; i<arrlen; i++)
			delete arr[i];

		delete []arr;			
	}
};

int main(void)
{
	BoundCheck2DIntArray arr2d(3, 4);

	for(int n=0; n<3; n++)
		for(int m=0; m<4; m++)
			arr2d[n][m] = n + m;

	for(int n=0; n<3; n++)
	{
		for(int m=0; m<4; m++)
			cout<<arr2d[n][m]<<' ';		
			cout<<endl;
	}
	return 0;
}