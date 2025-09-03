#include "tetcher.h"
#include <iostream>
#include <persone.h>
using namespace std;
tetcher::tetcher()
{
    //ctor
}

tetcher::~tetcher()
{
    //dtor
}
tetcher::tetcher ()
    {

    }
    ~ tetcher::tetcher(){
    }
    tetcher::tetcher (int  tetcherid,string subject,float salary)
    {
        this -> tetcherid = tetcherid;
        this -> subject= subject;
        this ->salary=salary;
    }
    void print (){

    persone::print();
    cout <<"tetcherid is"<<tetcherid <<endl;
     cout <<"subject is"<<subject<<endl;
      cout <<"salary is"<< salary<<endl;
          }

    void tetcher::settetcherid(int  tetcherid)
    {
        this -> tetcherid = tetcherid;
    }
    void  tetcher::setsubject(string subject)
    {
        this -> subject= subject;
    }
    void  tetcher::setsalary(float salary)
    {
        this ->salary=salary;
    }


    int  tetcher::gettetcherid()
    {
        return  tetcherid;
    }
    float tetcher::getsalary()
    {
        return salary;
    }
    string  tetcher::csubject()
    {
        return subject;
    }


