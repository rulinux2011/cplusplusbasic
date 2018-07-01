#include<iostream>
using namespace std;

template <typename T,typename Y=int>
class CFather
{
public:
     T a;
     CFather(T t)
     {
        a=12;
     }

     void show();
};

//类外实现函数模板

//template <typename T,typename Y>
template<> void CFather<int,char>::show()
{
      cout<<a<<endl;
}




int main()
{
     //CFather<char> pf('a');//模板参数列表
     //CFather<char> pf;//构造函数无参数列表
     //pf.show();
     //指针对象模板参数列表的传递
     CFather<int,char>* fp=new CFather<int,char>(1);
     fp->show();
     return 0;
}
