#include<iostream>
using namespace std;
class CStu
{
public:
      int nAge;
      double nScore;
      CStu()
      {
            nAge=12;
            nScore=12.12;
      }

};
//运算符重载
void operator+(CStu& st,int a)
{
     cout<<1<<endl;
     cout<<st.nAge+a<<endl;
}

void operator+(int a,CStu& st)
{
     cout<<2<<endl;
     cout<<st.nAge+12<<endl;
}


int main()
{

      CStu st1,st2;
      //对象不能直接相加
      st1+12;//+号左边对应左参数，右边对应右参数
      12+st1;
      return 0;
}


