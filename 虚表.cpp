#include<iostream>
using namespace std;

class CFather
{
public:
     virtual void fun()
     {
          cout<<"fun"<<endl;
     }
     virtual void show()
     {
          cout<<"classCFather\n";
     }

};

class CSon:public CFather
{
public:
     int aa;//虚 针对于 函数成员
     virtual void show()
     {
          cout<<"classCSon\n";
     }

};

int main()
{
     CFather* fa=new CSon;
     fa->show();
     //读取类的对象前4个字节的虚表地址
     cout<<*(int*)fa<<endl;
     //函数地址void(*p)
     typedef void (*p)();
     ((p)(*((int*)*(int*)fa+0)))();
     ((p)(*((int*)*(int*)fa+1)))();
     //虚表的结束标志
     cout<<*((int*)*(int*)fa+2)<<endl;
     return 0;
}
