#include<iostream>
using namespace std;

class CStu
{
public:
      int nAge;
      CStu()
      {
            nAge=12;
      }

      int operator+(int a)
      {
            return nAge+a;
      }
};

int main()
{
      CStu st;
      cout<<st+12<<endl;
      return 0;
}
