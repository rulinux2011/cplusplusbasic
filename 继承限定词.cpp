#include<iostream>
using namespace std;
class CPeople
{
private:
      void fun1()
      {
            cout<<"father private"<<endl;
      }
protected:
      void fun2()
      {
            cout<<"father protected"<<endl;
      }
public:
      void fun3()
      {
            cout<<"father public"<<endl;
      }

};

class Cxiaoming:protected CPeople
{
public:
      int a;
      void fun4()
      {
            fun2();
      }
};

class Cxiaohua:public Cxiaoming
{
public:
      void fun5()
      {
            fun2();
      }
};

int main()
{
      Cxiaoming xm;
      //子类无法直接访问基类的protected成员
      //xm.fun2();
      //子类无法访问基类的private成员
      //xm.fun1();
      Cxiaohua xh;
      xh.fun3();


      return 0;
}
