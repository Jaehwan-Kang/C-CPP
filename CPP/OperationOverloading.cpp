#include <iostream>

//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x=0, int y=0) : xpos(x), ypos(y)
//	{}
//
//	void ShowPosition() const
//	{
//		cout<<"[ "<<xpos<<", "<<ypos<<" ]"<<endl;
//	}
//
//	Point operator+(const Point &ref)
//	{
//		Point pos(xpos+ref.xpos, ypos+ref.ypos);
//		return pos;
//	}
//};
//
//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1.operator+(pos2);		// 컴파일 및 연산 성공
//	//Point pos3 = pos2.operator+(pos1);	// 컴파일 및 연산 성공 
//	//Point pos3 = pos1 + pos2;				// 컴파일 및 연산 성공
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//
//	return 0;
//}

// GFunctionOverloading.cpp
//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x=0, int y=0) : xpos(x), ypos(y)
//	{}
//	
//	void ShowPosition() const
//	{
//		cout<<"[ "<<xpos<<", "<<ypos<<" ]"<<endl;
//	}
//
//	friend Point operator+(const Point &pos1, const Point &pos2);
//};
//
//Point operator+(const Point &pos1, const Point &pos2)
//{
//	Point pos(pos1.xpos + pos2.xpos , pos1.ypos + pos2.ypos);
//	return pos;
//}
//
//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1 + pos2;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//
//	return 0;
//}

// OneOpndOverloading.cpp
//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x=0, int y=0) : xpos(x), ypos(y)
//	{}
//
//	void ShowPosition() const
//	{
//		cout<<"[ "<<xpos<<", "<<ypos<<" ]"<<endl;
//	}
//
//	Point& operator++()
//	{
//		xpos+=1;
//		ypos+=1;
//		return *this;
//	}
//
//	friend Point& operator--(Point &ref);
//};
//
//Point& operator--(Point &ref)
//{
//	ref.xpos-=1;
//	ref.ypos-=1;
//	return ref;
//}
//
//int main(void)
//{
//	Point pos(1,2);
//	++pos;
//	pos.ShowPosition();
//	--pos;
//	pos.ShowPosition();
//
//	++(++pos);
//	pos.ShowPosition();
//	--(--pos);
//	pos.ShowPosition();
//
//	return 0;
//}

// PostOpndOverloading.cpp
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{}

	void ShowPosition() const
	{
		cout<<"[ "<<xpos<<", "<<ypos<<" ]"<<endl;
	}

	// 전위 증가 
	Point& operator++() 
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}

	// 후위 증가
	const Point operator++(int)
	{
		const Point retobj(xpos, ypos);
		xpos+=1;
		ypos+=1;
		return retobj;
	}

	friend Point& operator--(Point &ref);
	friend const Point operator--(Point &ref, int);
};

// 전위 감소
Point& operator--(Point &ref)
{
	ref.xpos-=1;
	ref.ypos-=1;
	return ref;
}
// 후위 감소
const Point operator--(Point &ref, int)
{
	const Point retobj(ref);
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}

int main(void)
{
	Point pos1(3, 5);
	Point cpy;

	cpy = pos1--;
	cpy.ShowPosition();
	pos1.ShowPosition();

	cpy= pos1++;
	cpy.ShowPosition();
	pos1.ShowPosition();

	return 0;
}