/* 
  -  AccountHandler.h
  
  -  made by lupang1085@gmail.com

   - UPDATE
      2017-08-11        ver 0.7
      2017-08-16        ver 0.8     change private data  :  Account * accArr[100] → BoundCheckAccountPtrArray accArr;
                                                new include "AccountArray.h"
      2017-08-17        ver 0.10   REMOVE AccountArray.h ,  AccountArray.cpp                                                
 */
 #ifndef __ACCOUNT_HANDLER_H__
 #define __ACCOUNT_HANDLER_H__

#include "Account.h"
//#include "AccountArray.h"
#include "BoundCheckArray.h"

class AccountHandler
{
private:
    BoundCheckArray<Account*> accArr;
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