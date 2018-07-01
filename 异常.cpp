#include<iostream>
using namespace std;
class CA
{
public:
     int b;
     CA()
     {
         b=12;
     }
};

void fun(int a)
{
     while(a<10)
     {
          if(a==5)
          {
              throw 123.123;
              //throw 'a';
          }
          ++a;
     }
     //cout<<"a"<<a<<endl;
}

void fun2(CA& c)
{
     while(c.b<20)
     {
          if(c.b==5)
          {
               throw c;
          }
          c.b++;
     }
}



int main()
{
     //fun(1);
     //fun(0);
     CA po;

     try
     {
        fun2(po);
     }
     catch(CA& a)
     {

     }
     catch(CA* d)
     {
         d->b++;
     }
     catch(int b)
     {
         try
         {
              fun(b+1);
         }
         catch(int d)
         {

         }
     }
     catch(char c)
     {
          cout<<c<<endl;
     }
     catch(...)
     {
          cout<<"default"<<endl;
     }

     return 0;
}
