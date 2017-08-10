#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
    int bullet;
public:
    Gun(int bnum) : bullet(bnum)
    { }

    void Shot()
    {
        cout<<"BBANG!"<<endl;
        bullet--;
    }
};

class Police
{
private:
    int handcuffs;
    Gun * pistol;
public:
    Police(int bnum, int bcuff)
}