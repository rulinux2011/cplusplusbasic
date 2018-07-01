#include<iostream>
using namespace std;

template <typename T,typename Y=char>
class CFather
{
public:
      virtual void fun()
      {
           cout<<"CFather"<<endl;
      }
};

template <typename W,typename X,typename Z>
class CSon:public CFather<W,Z>
{
public:
     void fun()
     {
          cout<<"CSon"<<endl;
     }

};

int main()
{
     CFather<short,char>* pf=new CSon<short,int,char>;
     pf->fun();
     return 0;
}
