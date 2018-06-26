#include<iostream>
#include<string.h>
using namespace std;
class CStu
{
   public:
         int b;
         char c[4];
         CStu()
         {
               b=12;
               c[0]='a';
               //strcpy(c,"abc");
               strcpy_s(c,4,"abc");
         }
         CStu(const CStu& a)
         {
               this->b=a.b;
               strcpy_s(this->c,4,a.c);
               cout<<1<<endl;
         }
};

int main()
{
      CStu st;
      cout<<st.b<<" "<<st.c<<endl;
      CStu st1=st;
      cout<<st1.b<<" "<<st1.c<<endl;
      return 0;
}
