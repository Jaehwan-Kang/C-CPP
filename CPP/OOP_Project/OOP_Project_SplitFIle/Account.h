/* 
  -  Account.h
  
  -  made by lupang1085@gmail.com

   - UPDATE
      2017-08-11       =>      ver 0.7
 */

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
private:
	int accID;
	int result;
	char * custname;
public:
    Account(int id, int cash, char * name);
    Account(const Account& ref);

    int GetID() const;
    virtual void InMoney(int money);
    int OutMoney(int money);
    void IdInfo() const;
    ~Account();
};

#endif