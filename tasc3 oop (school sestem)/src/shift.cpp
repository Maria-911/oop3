#include "shift.h"
#include <iostream>
#include <persone.h>
using namespace std;
shift::shift()
{
    //ctor
}

shift::~shift()
{
    //dtor
}
shift::shift ()
{

}
~ shift::shift(){
}
shift::shift( int shiftid,string role,float salary,string name,
              int age,string gender,string address
              ,string phone number,string email):persone(name,age,gender,address,phone number,email)

{
    this->shiftid=shiftid;
    this->role=role;
    this -> salary= salay;
}
void  persone::print ()
{
    persone::print();
    cout <<"shiftid is "<<shiftid << endl;
    cout <<" role is"<< role<< endl;
    cout <<"salary is"<<salary << endl;
}
void  shift::setshiftid(int shiftid )
{
    this->shiftid=shiftid;
}
void  shift::setrole(string role)
{
    this->role=role;
}
void  shift::setsalary( float aslary)
{
    this -> salary= salay;
}
int  shift::getshiftid()
{
    return shiftid;
};

string  shift::getrole()
{
    return role;
}
float  shift::getsalary ()
{
    return salary;
kj}
