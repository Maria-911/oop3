#ifndef EXAM_H
#define EXAM_H
#include <iostream>

using namespace std;

class exam
{  private:
 string examname;
 string coursecode;
string examdate;

  public:
     exam();
      ~exam();
      exam ( string examname,string coursecode,string examdate );
          void setexamname ( string examname);
          void setcoursecode (string coursecode);
         void setexamdate (string examdate);

    string  getexamname();
     string getcoursecode();
      string getexamdate();
      void info();
};

#endif // EXAM_H
