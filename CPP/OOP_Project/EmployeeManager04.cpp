#include <iostream>
#include <cstring>

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
	{ }

	void AddWorkTime(int time)
	{
		WorkTime+=time;
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
		salesResult+=value;
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

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker * alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	// 영업직 등록
	SalesWorker * seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	// 이번달 지불할 급여 정보
	handler.ShowAllSalaryInfo();

	// 지불할 급여의 총합
	handler.ShowTotalSalary();

	return 0;
}