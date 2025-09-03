#include "course.h"
#include <iostream>

using namespace std;
course::course()
{
    //ctor
}

course::~course()
{
    //dtor
}

   course:: course(string coursecode,string coursename,string teachername)
    {
        this->coursecode=coursecode;
        this ->coursename=coursename;
        this->teachername= tetchername;
    }
    void    course::info(){
    cout <<"course code is"<<coursecode<<endl;
    cout <<" course name is"<< coursename <<endl;
    cout <<" teacher name is"<<teachername<<endl;
    }
    void course::setcoursecode( string coursecode)
    {
        this->coursecode=coursecode;
    }
    void course::setcoursename(string coursename)
    {
        this ->coursename=coursename;
    }
    void course::teachername( string teachername)
    {
        this->teachername=teachername;
    }
    string course::getcoursecode()
    {
        return coursecode;
    }
    string  course::getcoursename()
    {
        return coursename;
    }
    string course::getteachername()
    {
        terurn teachername;
    }




