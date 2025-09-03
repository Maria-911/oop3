#include " student.h"
#include <iostream>
#include <persone.h>
using namespace std;
 student:: student()
{
    //ctor
}

 student::~ student()
{
    //dtor
}
student::student
{

}
~student::student();
student::student(int id,int level,float gba,string name,int age,string gender,string address
            ,string phone number,string email) : persone( name,age,gender,address,phone number,email)
{
    this -> id=id;
    this ->level=level;
    this ->  gba=gba;
}
void student::print ()
{
       persone::print();
    cout << " id is "<<  id<<endl;
    cout << " level is"<< level<<endl;
    cout << "gba is"<< gba << endl;
}

void student::setgba(float gba)
{
    this ->  gba=gba;
}
void student::setid (int id)
{
    this -> id=id;
}
void student::setlevel(int level)
{
    this ->level=level;
}

int student::getid()
{
    return id;
}
float student:: getgba()
{
    return gba;
}
int  student::getlevel()
{
    return level;
}
