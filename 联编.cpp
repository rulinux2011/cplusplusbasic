#include<iostream>
using namespace std;
class CA
{
public:
     virtual void fun()
     {
          cout<<"CA"<<endl;
     }
};
/*
void fun1()
{
     cout<<"CA"<<endl;
}
*/
class CB:public CA
{
public:
     void fun()
     {
          cout<<"CB"<<endl;
     }
};
int main()
{
     //CA* a=new CB;
     //a->fun();
     //fun1();

     CA* a;
     int b;
     cin>>b;
     switch(b)
     {
     case 1:
          a=new CA;
          break;
     case 2:
          a=new CB;
          break;
     }
     a->fun();
     return 0;
}
