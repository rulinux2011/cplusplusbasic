#include<iostream>
using namespace std;

class CStu
{
public:
      int nAge;
      CStu(int age)
      {
            nAge=age;
      }
      int operator >= (CStu& st)
      {
          return this->nAge>=st.nAge;
      }
      int operator & (CStu& st)
      {
          return this->nAge&st.nAge;
      }
      int operator && (CStu& st)
      {
            return this->nAge&&st.nAge;
      }

};
/*
int operator >= (CStu& st,CStu& st2)
{
      return st.nAge>=st2.nAge;
}
*/

int main()
{
      CStu st1(12);
      CStu st2(13);
      cout<<(st1>=st2)<<endl;
      cout<<(st1&st2)<<endl;
      cout<<(st1&&st2)<<endl;
      return 0;
}
