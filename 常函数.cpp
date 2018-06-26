#include<iostream>
using namespace std;
class CStu
{
public:
      int a;
      CStu():a(12)
      {

      }
      void show() const
      {
            //this->a=12;报错，常函数无法修改成员数据
            //a=12;报错，常函数无法修改成员数据
            int b=13;
            cout<<a+b<<" "<<"i am show"<<endl;
      }
      void fun()
      {
            cout<<"i am fun"<<endl;
      }
      ~CStu()
      {

      }
};

int main()
{

      const CStu *st=new CStu;
      st->show();
      //st->fun(); //会报错，st是一个常对象，只能调用常函数
      return 0;
}
