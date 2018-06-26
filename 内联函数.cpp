#include<iostream>
#define SUM(x) x*x
using namespace std;
inline void fun(int i)
{
      cout<<i*i<<endl;
}
class CStu
{
public:
      void fun()//inline
      {

      }
      inline void fun_()
      {

      }
      void fun1();

};

void CStu::fun1()
{

}

int main()
{
      //宏的单纯替换
      cout<<SUM(2+3)<<endl;
      //内联函数
      fun(2+3);
      return 0;
}
