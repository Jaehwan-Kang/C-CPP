/* 
  -  HighCreditAccount.h
  
  -  made by lupang1085@gmail.com

   - UPDATE
      2017-08-11       =>      ver 0.7
 */

#ifndef __HIGH_CREDIT_ACCOUNT_H__
#define __HIGH_CREDIT_ACCOUNT_H__

#include "NormalAccount.h"

/*
    NormalAccount 유도클래스 : HighCreditAccount
*/
class HighCreditAccount : public NormalAccount
{
private:
    int creditRate;

public:
    HighCreditAccount(int id, int cash, char * name, int rate, int creaditrate)
        :  NormalAccount(id, cash, name, rate), creditRate(creaditrate)
        {}

    virtual void InMoney(int money)
    {
        NormalAccount::InMoney(money);
        Account::InMoney(money * (creditRate/100.0));
    }
};


#endif