#include<iostream>
using namespace std;
class CFather
{
public:
     //纯虚函数的形式,有纯虚函数的类不能够创建对象
     virtual void fun() =0;

};

class CSon:public CFather
{
public:
     void fun()
     {
          cout<<"CSon\n";
     }
};

int main()
{
     //纯虚函数所在的类无法直接实例化
     CSon pf;
     pf.fun();
     return 0;
}
