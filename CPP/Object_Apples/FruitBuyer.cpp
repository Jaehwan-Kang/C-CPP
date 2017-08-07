#include <iostream>

using namespace std;

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money);
    void BuyApples(FruitSeller &seller, int money);
    void ShowBuyResult();
};

void FruitBuyer::InitMembers(int money)
{
    myMoney = money;
    numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
    numOfApples += seller.SaleApples(money);
    myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
    cout<<"현재 잔액 : "<<myMoney<<endl;
    cout<<"사과 개수 : "<<numOfApples<<endl;
}