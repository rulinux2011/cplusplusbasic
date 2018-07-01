#include<iostream>
using namespace std;

class COut
{
    public:
          int a;
          COut():in(this)
          {
               a=12;
          }
    public:
         class CIn
         {
           public:
                 int b;
                 COut* c;
                 CIn(COut* pt):c(pt)
                 {
                      b=13;
                 }
                 void funIn()
                 {
                      cout<<c->a<<endl;
                 }

         };
    public:
        CIn in;
};


int main()
{
     COut io;
     io.a=15;
     io.in.funIn();

     return 0;
}
