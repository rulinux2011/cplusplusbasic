#include<iostream>
using namespace std;

class CFather
{
public:
     virtual void show()
     {
          cout<<"classCFather\n";
     }

};

class CSon:public CFather
{
public:
     int aa;
     virtual void show()
     {
          cout<<"classCSon\n";
     }

};

class CSon1:public CFather
{
public:
     int aa;
     virtual void show()
     {
          cout<<"classCSon1\n";
     }
};

int main()
{
     CFather* fa=new CSon;
     //普通的只能调用父类的成员
     fa->show();
     CFather* fa1=new CSon1;
     fa1->show();
     return 0;
}
