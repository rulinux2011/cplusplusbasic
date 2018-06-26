#include<iostream>
#include<cstdlib>
using namespace std;

class CStu
{
public:
      int nAge;
      int *pp;
      CStu()
      {
            nAge=12;
            int *pp=new int;
            cout<<1<<endl;
      }

      ~CStu()
      {
             cout<<2<<endl;
             delete pp;
      }
};

int main()
{
      //malloc无法触发构造函数
      //CStu *stu=(CStu *)malloc(sizeof(CStu));
      CStu* stu=new CStu;
      //free(stu);
      delete stu;
      return 0;
}
