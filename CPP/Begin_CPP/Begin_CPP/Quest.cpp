#include "stdafx.h"
#include <iostream>
#include "string.h"


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
//	return 0;
//}

/* 01-1-4
int CalSalary(int sales)
{
	return (int)(50+sales*0.12);
}

int main(void)
{
	int sales;

	while(1)
	{


		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin>>sales;

		if(sales==-1)
			break;

		std::cout<<"이번 달 급여 : ";
		std::cout<<CalSalary(sales)<<"만원"<<std::endl;
	}
	
	std::cout<<"프로그램을 종료합니다."<<std::endl;
	return 0;
}
*/

//// 01-2-1
//void swap(int * ptr1, int * ptr2)
//{
//	int temp;
//	temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//void swap(char * ptr1, char * ptr2)
//{
//	char temp;
//	temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//void swap(double * ptr1, double * ptr2)
//{
//	double temp;
//	temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//int main(void)
//{
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout<<num1<<' '<<num2<<std::endl;
//
//	char ch1 = 'A', ch2 = 'Z';
//	swap(&ch1, &ch2);
//	std::cout<<ch1<<' '<<ch2<<std::endl;
//
//	double dbl1 = 1.111, dbl2 = 5.555;
//	swap(&dbl1, &dbl2);
//	std::cout<<dbl1<<' '<<dbl2<<std::endl;
//
//	return 0;
//	/* 
//	[실행 예]
//	30 20
//	Z A
//	5.555 1.111
//	*/
//}

// 01-3-1
//int BoxVolume(int length, int width, int height)
//{
//	return length*width*height;
//}
//
//int BoxVolume(int length, int width)
//{
//	return length*width*1;
//}
//
//int BoxVolume(int length)
//{
//	return length*1*1;
//}
//
//int main(void)
//{
//	std::cout<<"[3, 3, 3] : "<<BoxVolume(3,3,3)<<std::endl;
//	std::cout<<"[5, 5, D] : "<<BoxVolume(5,5)<<std::endl;
//	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
////	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;
//
//	return 0;
//}


//// 02-1-1
//using namespace std;
//
//void Addnum(int &ref1)
//{
//	ref1++;
//}
//
//void Sign(int &num)
//{
//	num *= -1;
//}
//
//int main(void)
//{
//	int val = 20;
//	Addnum(val);
//	cout<<"val : "<<val<<endl;
//
//	Sign(val);
//	cout<<"val : "<<val<<endl;
//
//	return 0;
//}

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

// 02-3-1
//
//using namespace std;
//
//typedef struct __Point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//Point& PntAdder(const Point &p1, const Point &p2)
//{
//	Point * pptr = new Point;
//	pptr->xpos = p1.xpos + p2.xpos;
//	pptr->ypos = p1.ypos + p2.ypos;
//	return *pptr;
//}
//
//int main(void)
//{
//	Point *pptr1 = new Point;
//	pptr1->xpos = 3;
//	pptr1->ypos = 30;
//
//	Point *pptr2 = new Point;
//	pptr2->xpos = 70;
//	pptr2->ypos = 7;
//
//	Point &pref = PntAdder(*pptr1, *pptr2);
//	cout<<"["<<pref.xpos<<", "<<pref.ypos<<"]"<<endl;
//
//	delete pptr1;
//	delete pptr2;
//	delete &pref;
//
//	return 0;
//}

// 03-1
//using namespace std;
//
//struct Point
//{
//	int xpos;
//	int ypos;
//
//	void MovePos(int x, int y)
//	{
//		xpos += x;
//		ypos += y;
//	}
//	void AddPoint(const Point &pos)
//	{
//		xpos += pos.xpos;
//		ypos += pos.ypos;
//	}
//	void ShowPosition()
//	{
//		cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
//	}
//};
//
//int main(void)
//{
//	Point pos1 = {12, 4};
//	Point pos2 = {20, 30};
//
//	pos1.MovePos(-7, 10);
//	pos1.ShowPosition();
//
//	pos1.AddPoint(pos2);
//	pos1.ShowPosition();
//
//	return 0;
//}

// 04-2

//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	void Init(int x, int y)
//	{
//		xpos = x;
//		ypos = y;
//	}
//
//	void ShowPointInfo() const
//	{
//		cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
//	}
//};
//
//class Circle
//{
//private:
//	int rad;		// 반지름
//	Point center;	// center 라는 원의중심 객체 생성
//
//public:
//	void Init(int x, int y, int r)
//	{
//		rad = r;
//		center.Init(x, y);
//	}
//
//	void ShowCircleInfo() const
//	{
//		cout<<"radius : "<<rad<<endl;
//		center.ShowPointInfo();
//	}
//
//};
//
//
//class Ring
//{
//private:
//	Circle inCircle;
//	Circle outCircle;
//
//public:
//	void Init(int inX, int inY, int inR, int outX, int outY, int outR)
//	{
//		inCircle.Init(inX, inY, inR);
//		outCircle.Init(outX, outY, outR);
//	}
//
//	void ShowRingInfo() const
//	{
//		cout<<"Inner Circle Info..."<<endl;
//		inCircle.ShowCircleInfo();
//
//		cout<<"Outter Circle Info..."<<endl;
//		outCircle.ShowCircleInfo();
//	}
//};
//
//int main(void)
//{
//	Ring ring;
//	ring.Init(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//
//	return 0;
//}

/// 04-3-2
using namespace std;

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pnum)
	{
		switch(pnum)
		{
		case CLERK:
			cout<<"사원"<<endl;
			break;
		case SENIOR:
			cout<<"주임"<<endl;
			break;
		case ASSIST:
			cout<<"대리"<<endl;
			break;
		case MANAGER:
			cout<<"과장"<<endl;
		}
	}
}

class NameCard
{
private:
	char * name;
	char * company;
	char * phone;
	int position;

public:
	NameCard(char * _name, char * _company, char * _phone, int pnum)
		: position(pnum)
	{
		name = new char[strlen(_name)+1];
		company = new char[strlen(_company)+1];
		phone = new char[strlen(_phone)+1];
		strcpy(name, _name);
		strcpy(company, _company);
		strcpy(phone, _phone);
	}

	void ShowNameCardInfo()
	{
		cout<<"이름 : "<<name<<endl;
		cout<<"회사 : "<<company<<endl;
		cout<<"번호 : "<<phone<<endl;
		cout<<"직급 : "; COMP_POS::ShowPositionInfo(position);
		cout<<endl;
	}

	~NameCard()
	{
		delete []name;
		delete []company;
		delete []phone;
	}
};



int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}