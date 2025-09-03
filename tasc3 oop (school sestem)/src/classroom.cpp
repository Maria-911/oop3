#include "classroom.h"
#include <iostream>

using namespace std;
classroom::classroom()
{
    //ctor
}

classroom::~classroom()
{
    //dtor
}
 classroom::classroom( int roomnumber,int capacity)
    {
        this->roomnumber=roomnumber;
        this-> capacity=capacity;
    }

    void classroom::info(){
    cout <<" room number is"<<roomnumber<<end;
    cout <<" capacity is "<< capacity <<endl;
    }
    void classroom::setroomnumber ( int roomnumber)
    {
        this ->roomnumber=roomnumber;
    }
    void classroom::setcapacity( int capacity)
    {
        this-> capacity=capacity;
    }
    int classroom::getroomnumber ()
    {
        return roomnumber;
    }
    int classroom::getcapacity()
    {
        return capacity;
    }
