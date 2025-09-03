#ifndef  PERSONE _H
#define  PERSONE _H

#include <iostream>

using namespace std;
class  persone
{
private:
    string name;
    int age ;
    string gender;
    string address;
    string phone number;
    string email;
public:
    persone();
    ~persone();
    persone( string name,int age,string gender,string address
            ,string phone number,string email);

void setname ( string name);
void setage (int age );
void setaddress(string address);
void setgende(string gender);
void setphone number( string phone number);
void setemail(string email);
string getname();
int getage ();
string getgender();
string getaddress();
string getphone number();
string getemail ();
void print();
};

#endif //  PERSONE _H
