#include<iostream>
using namespace std;
class CFather
{
public:
     virtual void show(int a)
     {
        cout<<"classCFather\n";
     }
     virtual~CFather()
     {
          cout<<"CFather"<<endl;
     }
};
class CSon:public CFather
{
public:
     virtual void show(int a)
     {
          cout<<"classCSon\n";
     }
     virtual~CSon()
     {
          cout<<"CSon"<<endl;
     }
};
class Cxiaoming
{
public:
     ~Cxiaoming()
     {
          cout<<"Cxiaoming"<<endl;
     };
};

int main()
{
     CFather* fa=new CSon;
     //delete fa;

     delete (Cxiaoming*)fa;
     return 0;
}
