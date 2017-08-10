#include "stdafx.h"
#include <iostream>
//using namespace std;

//class AAA
//{
//public:
//	AAA()
//	{
//		cout<<"empty object"<<endl;
//	}
//	void ShowYourName()
//	{
//		cout<<"I'm class AAA"<<endl;
//	}
//};
//
//class BBB
//{
//private:
//	AAA &ref;
//	const int &num;
//
//public:
//	BBB(AAA &r, const int &n)
//		: ref(r), num(n)
//	{ // empty constructor body
//	}
//
//	void ShowYourName()
//	{
//		ref.ShowYourName();
//		cout<<"and"<<endl;
//		cout<<"I ref num "<<num<<endl;
//	}
//};
//
//int main(void)
//{
//	AAA obj1;
//	BBB obj2(obj1, 20);
//	obj2.ShowYourName();
//
//	return 0;
//}

//class AAA
//{
//private:
//	int num;
//public:
//	AAA() : num(0) {}
//	AAA& CreateInitObj(int n) const
//	{
//		AAA * ptr = new AAA(n);
//		return *ptr;
//	}
//
//	void ShowNum() const { cout<<num<<endl; }
//
//private:
//	AAA(int n) : num(n) {}
//
//};
//
//int main(void)
//{
//	AAA base;
//	base.ShowNum();
//
//	AAA &obj1 = base.CreateInitObj(3);
//	obj1.ShowNum();
//
//	AAA &obj2 = base.CreateInitObj(12);
//	obj2.ShowNum();
//
//	delete &obj1;
//	delete &obj2;
//
//	return 0;
//}

//class Person
//{
//private:
//	char * name;
//	int age;
//public:
//	Person(char * myname, int myage)
//	{
//		int len = strlen(myname)+1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//
//	void ShowPersonInfo() const
//	{
//		cout<<"이름 :  "<<name<<endl;
//		cout<<"나이 :  "<<age<<endl;
//	}
//
//	~Person()
//	{
//		delete []name;
//		cout<<"called destructor!"<<endl;
//	}
//};

//int main(void)
//{
//	Person man1("Lee dong woo", 29);
//	Person man2("Jang dong gun", 41);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//
//	return 0;
//}