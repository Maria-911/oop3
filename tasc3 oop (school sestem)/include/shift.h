#ifndef SHIFT_H
#define SHIFT_H
#include <iostream>
#include <persone.h>
using namespace std;
class  shift:public persone
{
private :
    int shiftid;
    string role;
    float salary;

public:
    shift();
    ~shift();
    shift( int shiftid,string role,float salary);
    void setshiftid(int shiftid );
    void  setrole (string role);
    void setsalary(float salary);
    int getshiftid ();
    string getrole();
    float getsalary();
    void print();
};

#endif // SHIFT_H
