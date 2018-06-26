#include<iostream>
using namespace std;

class CStu
{
public:
      static int a;
      const static int b=12;
      int c;
      CStu()
      {
          a=12;
      }
      static void fun()
      {
            //this->a=14;静态函数没有this指针，编译会报错
            cout<<"i am static"<<endl;
            a=14;
      }
};

//静态类成员类外初始化
int CStu::a=13;

int main()
{
      //直接类名作用域调用
      cout<<CStu::a<<endl;
      CStu::fun();
      //通过对象来调用
      CStu* p=new CStu;
      cout<<p->a<<endl;
      p->fun();
      delete p;
      return 0;
}
