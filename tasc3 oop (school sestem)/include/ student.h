#ifndef  STUDENT_H
#define  STUDENT_H
#include <iostream>
#include <persone.h>
using namespace std;
class  student :public persone
{
private:
    int id ;
    int level;
    float gba;

public:
    student();
    ~student();
    student(int id,int level,float gba)
    void setgba(float gba);
    void  setid (int id);
        void  setlevel(int level);
     int getid();
    int getlevel();
    float getgba();
 void print ();
};

#endif //  STUDENT_H
