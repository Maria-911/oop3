#ifndef COURSE_H
#define COURSE_H
#include <iostream>

using namespace std;

class course
{
private:

    string coursecode;
    string coursename;
    string teachername;
public:
    course();
    ~course();
    course(string coursecode,string coursename,string teachername);
    void setcoursecode( string coursecode);
    void setcoursename(string coursename);
    void teachername( string teachername);
    string getcoursecode();
    string  getcoursename();
    string getteachername();
void info;
};

#endif // COURSE_H
