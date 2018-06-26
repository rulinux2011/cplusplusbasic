#include<iostream>
using namespace std;
class CFather
{
public:
     virtual CFather* show()
     {
          cout<<"classCFather\n";
          return this;
     }
};
class CSon:public CFather
{
public:
     int aa;
     virtual CSon* show()f
     {
          cout<<"classCSon\n";
          return this;
     }
};
/*
class CSon2:public CSon
{
public:
     void show()
     {
          cout<<"classCSon2\n";
     }
};
*/
int main()
{
     CSon son;
     CFather* fa=&son;
     fa->show();

     //CSon* fa2=new CSon2;
     //fa2->show();

     return 0;
}
