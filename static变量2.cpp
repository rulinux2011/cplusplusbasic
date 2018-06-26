/*************不使用循环使变量自增************************/
#include<iostream>
using namespace std;

class CStu
{
public:
      static int b;
      CStu()
      {
            b++;
      }

};

int CStu::b=0;

int main()
{
      CStu st[5];
      cout<<CStu::b<<endl;
      return 0;
}
