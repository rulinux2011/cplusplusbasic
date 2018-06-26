#include<iostream>
using namespace std;
class CStu
{
public:
      int a;
      double b;
      CStu()
      {
            a=12;
            b=12.12f;
      }
      operator int()
      {
            return a;
      }
      operator double()
      {
            return b;
      }

};



int main()
{
      CStu st;
      cout<<(int)st<<endl;
      cout<<(double)st<<endl;
      float a=12.12f;
      cout<<(int)a<<endl;
      //cout<<int(a)<<endl;
      return 0;
}
