#ifndef SCHOOL_H
#define SCHOOL_H
#include < iostream>
#include< persone.h>
#include<student.h>
#include<coursr.h>
#include<shift.h>
#include<tetcher.h>
using namespace std;

class school
{ private:
    int  counter;
   string schoolname ;
   string address;
   string principalname;
   student students [100];
   tetcher  tetchers[20];
   shift staffmembers[10];
  course course [6];
  classroom classroom[10];

    public:
        school();
      ~school();
school(string schoolname,string address,string principalname);

 void setschoolname   (string schoolname);
  void setprincipalname  (string principalname);
  void setaddress   (string address);

       string getschoolname();
    string getaddress();
    string getprincipalname();
    void print ;
    void printstu;

};

#endif // SCHOOL_H
