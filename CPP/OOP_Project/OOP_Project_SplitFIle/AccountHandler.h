/* 
  -  AccountHandler.h
  
  -  made by lupang1085@gmail.com

   - UPDATE
      2017-08-11       =>      ver 0.7
 */
 #ifndef __ACCOUNT_HANDLER_H__
 #define __ACCOUNT_HANDLER_H__

#include "Account.h"

class AccountHandler
{
private:
    Account * accArr[100];      // Account 고객리스트용 배열 선언
    int accNum;                     // Account 수
public:
    AccountHandler();
    void MenuList(void) const;
    void MakeID(void);
    void InMoney(void);
    void OutMoney(void);
    void IdAllInfo(void) const;
    ~AccountHandler();

    void MakeIDNormal(void);
    void MakeIDHigh(void);
};

 #endif