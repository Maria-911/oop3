#include "school.h"
#include < iostream>
#include< persone.h>
#include<student.h>
#include<coursr.h>
#include<shift.h>
#include<tetcher.h>
using namespace std;
school::school()
{
    counter=0;
}

school::~school()
{
    //dtor
}

school::school(string schoolname,string address,string principalname)
{

    this->schoolname=schoolname;
     this->address=address;
    this-> principalname=principalname;
}
void school::print (){
cout <<" school name is "<< schoolname<<endl;
cout <<"address is"<<address<< endl;
cout <<"principal name is"<<principalname<<endl;

}
void school::numOfStu( student stu){
    if ( counter<100){
 students[ counter]=stu;
  counter++;}
  else cout <<" student is full";
}
 void school::printstu(){
 for(int i=0 ;i<=counter;i++){

 students[i].print;


 }
void school::setschoolname   (string schoolname)
{
    this->schoolname=schoolname;
}
void school::setprincipalname  (string principalname)
{
    this-> principalname=principalname;
}
void school::setaddress   (string address)
{
    this->address=address;
}

string school::getschoolname()
{
    return schoolname;
}
string school::getaddress()
{
    return address;
}
string school::getprincipalname()
{
    return principalname;
}

