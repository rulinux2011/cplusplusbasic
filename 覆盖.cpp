#include<iostream>
using namespace std;

class CFather
{
private:
     int b;
public:
      int a;
      CFather()
      {
          a=12;
          b=13;
      }
      void fun()
      {
           cout<<"CFather fun"<<endl;
      }
      friend void show();

};

class CSon:public CFather
{
private:
     int c;
public:
      int a;
      CSon()
      {
          a=10;
          c=14;
      }
      void fun()
      {
           cout<<"CSon fun"<<endl;
      }
      void fun1()
      {
           cout<<CFather::a<<endl;
      }
};

//友元函数无法被继承
void show()
{

    CFather ft;
    cout<<ft.b<<endl;

    /*
    CSon s;
    cout<<s.c<<endl;
    */
}

int main()
{
      CSon son;
      son.fun();
      //如果要调用父类的成员函数
      son.CFather::fun();
      //子类和父类函数同名时，子类会覆盖掉父类的函数，两个函数并不构成重载关系


      return 0;
}
