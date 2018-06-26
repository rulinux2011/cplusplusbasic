#include<iostream>
using namespace std;

class CStu
{
public:
      CStu()
      {
          cout<<1<<endl;
      }

      CStu(const CStu&  a)
      {
          cout<<2<<endl;
      }

};

void fun(CStu a)
{
      cout<<3<<endl;
}

CStu fun1()
{
      CStu a;
      return a;
}

int main()
{
      CStu st1;
      //对象参数初始化
      CStu stnew(st1);
      //对象初始化直接赋值
      CStu stnew1=st1;
      //创建临时对象来赋值
      CStu stnew2=CStu(st1);
      //指针对象的初始化
      CStu* stnew3=new CStu(st1);
      //直接赋值不会触发拷贝构造函数
      CStu stnew4;
      stnew4=st1;


      fun(st1);
      fun1();
      return 0;
}
