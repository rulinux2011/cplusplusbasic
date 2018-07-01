#include<iostream>
using namespace std;
class CFather
{
public:
   int a;
   virtual void fun()
   {

   }

};

class CSon:public CFather
{
public:
   int b;
   void fun()
   {

   }

};

class Other
{
public:
     double f;
};

int main()
{

     const CFather* p;
     CSon* so;
     Other* O;
     p=dynamic_cast<CFather*>(so);
    // so=dynamic_cast<CSon*>(p);
     O=reinterpret_cast<Other*>(so);
     struct dat
     {
          short a;
          short b;
     };
     long value=0xA224B118;
     dat* p1=reinterpret_cast<dat*>(&value);
     cout<<hex<<p1->a<<endl;
     cout<<hex<<p1->b;

     //CFather* p1=const_cast<CFather*>(p);
     //CSon* so=const_cast<CSon*>(p);出错
     so=(CSon*)p;
     return 0;
}
