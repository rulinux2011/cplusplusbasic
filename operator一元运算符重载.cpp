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
      int operator -()
      {
            return -nAge;
      }
      int operator !()
      {
            return !nAge;
      }

};
/*
int operator -(CStu& s)
{
      return -s.nAge;
}
int operator !(CStu& s)
{
      return !s.nAge;
}
*/

int main()
{
      CStu st(14);
      cout<<-st<<endl;
      cout<<!st<<endl;
      return 0;
}
