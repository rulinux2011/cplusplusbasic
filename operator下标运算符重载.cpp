#include<iostream>
using namespace std;
class CStu
{
public:
      int a;
      int b;
      int c;
      int d;
      int error_flag;
      CStu()
      {
          a=12;
          b=23;
          b=34;
          d=45;
          error_flag=-1;
      }
      int& operator [](int n)
     {
          switch(n)
          {
               case 1:
                 return a;
               case 2:
                 return b;
               case 3:
                 return c;
               case 4:
                 return d;
          }
          return error_flag;
     }
};


int main()
{
      //int a[10]={1,3,5};
      //a[1]=13;
      //对象+[2];

      CStu st;
      cout<<st[1]<<endl;
      st[1]=13;
      cout<<st[1]<<endl;

      return 0;
}
