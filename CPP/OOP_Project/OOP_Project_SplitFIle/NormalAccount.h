/* 
  -  NormalAccount.h
  
  -  made by lupang1085@gmail.com

   - UPDATE
      2017-08-11       =>      ver 0.7
 */

#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"
/*
    Account 유도클래스 : NormalAccount
*/
class NormalAccount : public Account
{
private:
    int interestRate;

public:
    NormalAccount(int id, int cash, char * name, int rate)
        : Account(id, cash, name), interestRate(rate)
        {}
    
    virtual void InMoney(int money)
    {
        Account::InMoney(money);
        Account::InMoney(money * (interestRate/100.0));
    }
};

#endif