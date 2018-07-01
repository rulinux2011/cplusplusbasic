#include<iostream>
using namespace std;
class CFather
{
protected:
     CFather()
     {

     }
public:
     static int flag;
     static CFather* CreateOJ()
     {
          if(flag==1)
          {
             flag=0;
             return new CFather;
          }else{
             return NULL;
          }
     }
     ~CFather()
     {
          flag=1;
     }

};

int CFather::flag=1;

int main()
{
     CFather* p=CFather::CreateOJ();
     delete p;
     CFather* p1=CFather::CreateOJ();
     return 0;
}
