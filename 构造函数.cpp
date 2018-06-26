#include<iostream>
#include<memory.h>
using namespace std;

class CStu
{
public:
      int age;
      float f;
      //构造函数,自动调用,没有返回值
      CStu()
      {
            age=12;
            f=12.12f;
      }

};

class CStu2
{
public:
      int b;
      int a;
      const int d;
      //构造函数,自动调用,没有返回值
      /*
      CStu():age(12),f(12.12f)//成员初始化列表
      {

      }
      */


      CStu2(int &c):a(c),b(c),d(c)
      {

      }

      void show()
      {
            cout<<a<<" "<<b<<" "<<d<<endl;
      }

};

struct STU
{
      int i;
      float f2;
};

class CStu3
{
public:
      int a[4];
      STU st;
      CStu3(STU sd):st(sd)
      {
          memset(a,0,16);
      }

      void show()
      {
            cout<<st.i<<" "<<st.f2<<endl;
            for(int i=0;i<4;++i)
            {
                 cout<<a[i]<<endl;
            }
      }
};



int main()
{
      CStu stu;

      cout<<stu.age<<" "<<stu.f<<endl;

      int e=12;

      CStu2 stu2(e);
      stu2.show();

      //结构体可以直接赋值给另外一个结构体
      STU sf={123,123.123f};
      STU sf2=sf;

      CStu3 stu3(sf2);
      stu3.show();

      return 0;
}

