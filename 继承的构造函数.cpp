#include<iostream>
using namespace std;
class CPeople
{
public:
      CPeople()
      {
            cout<<"CPeople"<<endl;
      }
};

class Cxiaoming:public CPeople
{
public:
      Cxiaoming()
      {
            cout<<"Cxiaoming"<<endl;
      }
};

class Cxiaohua:public Cxiaoming
{
public:
      Cxiaohua()
      {
            cout<<"xiaohua"<<endl;
      }
};

int main()
{
      //继承构造的顺序：先父类再子类
      Cxiaoming xiaoming;
      cout<<endl;
      Cxiaohua xiaohua;



      return 0;
}
