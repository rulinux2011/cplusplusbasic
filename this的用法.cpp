#include<iostream>
using namespace std;
class A
{
public:
      int a;
      A(int a)
      {
            //a=a;
            //cout<<a<<endl;
            this->a=a;//A*类型
      }
      //this不是成员，是类成员函数的隐含参数

      void show()
      {

            cout<<this->a<<endl;
      }

      A* GetAddr()
      {
            return this;
      }
};
int main()
{
      A st(12);
      st.show();
      A* p=st.GetAddr();
      cout<<p<<endl;
      p->show();
      return 0;
}
