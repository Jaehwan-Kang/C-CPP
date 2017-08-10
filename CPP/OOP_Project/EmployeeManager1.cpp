#include <iostream>

using namespace std;

class PermanentWorker		// 데이터 성격의 클래스
{
private:
	char name[100];
	int salary;
public:
	PermanentWorker(char * name, int money)
		: salary(money)
	{
		strcpy(this->name, name);
	}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		cout<<"name: "<<name<<endl;
		cout<<"salary: "<<salary<<endl<<endl;
	}
};


//  기능 영역으로 핸들러클래스 or  컨트롤 클래스 
class EmployeeHandler
{
private:
	PermanentWorker* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{}

	void AddEmployee(PermanentWorker* emp)
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

	// 직원 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	// 이번달 지불할 급여 정보
	handler.ShowAllSalaryInfo();

	// 지불할 급여의 총합
	handler.ShowTotalSalary();

	return 0;
}