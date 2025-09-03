#include "exam.h"
#include <iostream>

using namespace std;
exam::exam()
{
    //ctor
}

exam::~exam()
{
    //dtor
}

exam::exam ( string examname,string coursecode,string examdate )
{
    this->examname=examdate;
    this-> coursecode=coursecode;
    this-> examdate=examdate;

}
  void exam::info(){
  cout <<" exam name is"<<examname<<endl;
  cout <<" course code is"<<coursecode<<endl;
  cout <<" exam date is"<<examdate<<endl;
  }
void exam::setexamname ( string examname)
{
    this-> examname=examname;
}
void exam::setcoursecode (string coursecode)
{
    this-> coursecode=coursecode;
}
void exam::setexamdate (string examdate)
{
    this->examdate=examdate;
}

string  exam::getexamname()
{
    return examname;
}
string exam::getcoursecode()
{
    return coursecode
}
string exam::getexamdate()
{
    return examdate;
}
