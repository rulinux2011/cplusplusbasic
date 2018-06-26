#include<iostream>
using namespace std;

class CStu
{
public:
      int nAge;
      double dbHeight;
public:
      CStu()
      {
         nAge=0;
         dbHeight=0.0;
      }
      int operator = (int a)
      {
            nAge=a;
            return nAge;
      }
      /*
      int operator +=(int a)
      {
            nAge=nAge+a;
            return nAge;
      }
      */
};

CStu& operator += (CStu& s,int a)
{
      s.nAge=s.nAge+a;
      return s;
}

ostream& operator <<(ostream& o,const CStu& s)
{
      o<<s.nAge;
      return o;
}


int main()
{
      CStu st;
      cout<<(st=13)<<endl;

      CStu st1;
      int a=114;
      st1+=a+=113;
      cout<<st1<<endl;

      return 0;
}

