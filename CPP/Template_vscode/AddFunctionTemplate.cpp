#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
    return num1 + num2;
}

int main(void)
{
    // cout<< Add<int>(15, 20)              <<endl;
    // cout<< Add<double>(2.9, 3.7)     <<endl;
    // cout<< Add<int>(3.2, 3.2)          <<endl;   →  결과 6 
    // cout<< Add<double>(3.14, 2.75)  <<endl;

    // 전달 인자의 자료형을 표기하지 않고 호출이 가능하다.
    cout<< Add(15, 20)              <<endl;
    cout<< Add(2.9, 3.7)     <<endl;
    cout<< Add(3.2, 3.2)          <<endl;   // → 결과 6.4
    cout<< Add(3.14, 2.75)  <<endl;

    return 0;
}