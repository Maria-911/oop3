#ifndef TETCHER_H
#define TETCHER_H

#include <iostream>
#include <persone.h>
using namespace std;

class  tetcher :public persone
{
private:
    int id ;
    string subject;
    float salary;

public:
    tetcher ();
    ~tetcher ();
    tetcher (int  tetcherid,string subject,float salary);
    void settetcherid(int  tetcherid);
     void setsubject(string subject);
    void setsalary(float salary);
     int get tetcherid();
    float getsalary();
      string subject();
      void print ();
    };

#endif // TETCHER_H
