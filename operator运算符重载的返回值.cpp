#include<iostream>
using namespace std;
class CStu
{
public:
      int nAge;
      double nScore;
      CStu()
      {
            nAge=12;
            nScore=12.12;
      }

};

int operator+(CStu& st,int a)
{
      return st.nAge+a;
}

int operator+(int a,CStu& st)
{
      return st.nAge+a;
}

CStu& operator+(CStu& st,CStu& st1)
{
      st1.nAge+=st.nAge;
      return st1;
}


int main()
{
      CStu st1,st2;
      cout<<st1+12+13+(st2+st2)+23<<endl;
      return 0;
}
