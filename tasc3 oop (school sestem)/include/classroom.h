#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>

using namespace std;

class classroom
{
private:
    int roomnuber;
    int capacity;

public:
    classroom();
    ~classroom();
    classroom( int roomnuber,int capacity);
    void setroomnumber ( int roomnuber);
    void setcapacity( int capacity);
    int getroomnuber ();
    int getcapacity();
void info;

};

#endif // CLASSROOM_H
