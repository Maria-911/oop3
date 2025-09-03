#include " persone .h"

#include <iostream>

using namespace std;
class  persone
 persone :: persone ()
{
    //ctor
}

 persone ::~ persone ()
{
    //dtor
}
 persone::persone()
{

}
persone::persone( string name,int age,string gender,string address,string phone number,string email)
{

    this ->name =name ;
    this ->age =age;
    this -> gender=gender;
    this -> address=address;
    this ->phone number= phone number;
    this -> email= email;
}
 void persone::print (){
 cout <<"the name is "<<name<< endl;
  cout <<"the age is"<<age<< endl;
   cout <<"the gender is"<<gender<< endl;
    cout <<" the address is"<<address<< endl ;
    cout <<" the phone number is"<<phone number<< endl;
     cout <<" the email is"<<email<< endl;
 }

void persone::setname ( string name)
{
    this ->name =name ;
}
void persone::setage (int age )
{
    this ->age =age;
}
void persone::setaddress(string address)
{

    this -> address=address;
}
void persone::setgende(string gender)
{

    this -> gender=gender;
}
void persone::setphone number( string phone number)
{
    this ->phone number=phone number;
}
void persone::setemail(string email)
{
    this -> email= email;
}


string persone::getname()
{
    return name ;
}
int persone::getage ()
{
    return age;
}
string persone::getgender()
{
    return gender;
}
string persone::getaddress()
{
    return  address;
}
string persone::getphone number()
{
    returnphone number;
}
string persone::getemail ()
{
    return email;
}


