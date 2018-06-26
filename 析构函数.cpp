#include<iostream>
using namespace std;

class CStu
{
public:
      int nAge;
      CStu()
      {
            nAge=12;
            cout<<1<<endl;
      }

      ~CStu()
      {
             cout<<2<<endl;
      }
};

int main()
{
      {
            //局部对象
            CStu stu;
      }   //在这里}结束的地方调用析构函数,标志着局部对象的结束
      //全局对象
      CStu stu1;
      //指针对象
      CStu *stu2=new CStu;
      delete stu2;
      //临时对象,作用域只在自己所在的那一条语句
      int b=CStu().nAge;
      cout<<b<<endl;
      return 0; //return表示函数的结束,全局的对象在这里调用析构函数
}
