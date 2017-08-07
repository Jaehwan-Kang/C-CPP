#include "stdafx.h"
#include <iostream>
#include <stdlib.h>


//// TrueAndFalse.cpp
//using namespace std;
//
//int main(void)
//{
//	int num = 10;
//	int i = 0;
//
//	cout<<"true : "<<true<<endl;
//	cout<<"false : "<<false<<endl;
//
//	while(true)
//	{
//		cout<<i++<<' ';
//		if(i>num)
//			break;
//	}
//	cout<<endl;
//
//
//	cout<<"sizeof 1: "<<sizeof(1)<<endl;
//	cout<<"sizeof 0: "<<sizeof(0)<<endl;
//	cout<<"sizeof true : "<<sizeof(true)<<endl;
//	cout<<"sizeof false : "<<sizeof(false)<<endl;
//
//	return 0;
//}

// DataTypeBool.cpp
//using namespace std;
//
//bool IsPositive(int num)
//{
//	if(num<=0)
//		return false;
//	else
//		return true;
//}
//
//int main(void)
//{
//	bool isPos;
//	int num;
//	cout<<"Input number: ";
//	cin>>num;
//
//	isPos=IsPositive(num);
//	if(isPos)
//		cout<<"Positive number"<<endl;
//	else
//		cout<<"Negative number"<<endl;
//
//	return 0;
//}

// Referen.cpp
//using namespace std;
//
//int main(void)
//{
//	int num1 = 1020;
//	int &num2 = num1;
//
//	num2 = 3047;
//
//	cout<<"VAL: "<<num1<<endl;
//	cout<<"REF: "<<num2<<endl;
//
//	cout<<"VAL: "<<&num1<<endl;
//	cout<<"REF: "<<&num2<<endl;
//
//	return 0;
//}

//// RefArrElem.cpp
//using namespace std;
//
//int main(void)
//{
//	int arr[3] = {1, 3, 5};
//	int &ref1 = arr[0];
//	int &ref2 = arr[1];
//	int &ref3 = arr[2];
//
//	cout<<ref1<<endl;
//	cout<<ref2<<endl;
//	cout<<ref3<<endl;
//
//	return 0;
//}

// RefPtr.cpp
//using namespace std;
//
//int main(void)
//{
//	int num = 12;
//	int *ptr = &num;
//	int **dptr = &ptr;
//
//	int &ref = num;
//	int *(&pref) = ptr;
//	int **(&dpref) = dptr;
//
//	cout<<ref<<endl;
//	cout<<*pref<<endl;
//	cout<<**dpref<<endl;
//
//	return 0;
//}


//// RefSwap.cpp
//using namespace std;
//
//void SwapByRef2(int &ref1, int &ref2)
//{
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main(void)
//{
//	int val1 = 10;
//	int val2 = 20;
//
//	SwapByRef2(val1, val2);
//
//	cout<<"val1 : "<<val1<<endl;
//	cout<<"val2 : "<<val2<<endl;
//
//	return 0;
//}

//// RefReturnOne.cpp
//using namespace std;
//
//int& RefRetFuncOne(int &ref)
//{
//	ref++;
//	return ref;
//}
//
//int main(void)
//{
//	int num1 = 1;
//	int &num2 = RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//
//	cout<<"num1: "<<num1<<endl;
//	cout<<"num2: "<<num2<<endl;
//		
//	return 0;
//}

//// MemMalFree.cpp
//using namespace std;
//
//char * MakeStrAdr(int len)
//{
//	char * str = (char*)malloc(sizeof(char)*len);
//	return str;
//}
//
//int main(void)
//{
//	char * str = MakeStrAdr(20);
//	strcpy(str, "I am so happy~");
//	cout<<str<<endl;
//
//	free(str);
//	return 0;
//
//}

//// MemMalFree.cpp
//using namespace std;
//
//char * MakeStrAdr(int len)
//{
//	//char * str = (char*)malloc(sizeof(char)*len);
//	char * str = new char[len];
//	return str;
//}
//
//int main(void)
//{
//	char * str = MakeStrAdr(20);
//	strcpy(str, "I am so happy~");
//	cout<<str<<endl;
//
//	//free(str);
//	delete []str;
//	return 0;
//
//}


//// NewObject.cpp
//using namespace std;
//
//class Simple
//{
//public:
//	Simple()
//	{
//		cout<<"I'm simple constructor!"<<endl;
//	}
//};
//
//int main(void)
//{
//	cout<<"case 1: ";
//	Simple * sp1 = new Simple;
//
//	cout<<"case 2: ";
//	Simple * sp2 = (Simple*)malloc(sizeof(Simple) * 1);
//
//	cout<<endl<<"end of main"<<endl;
//
//	delete sp1;
//	free(sp2);
//	return 0;
//}