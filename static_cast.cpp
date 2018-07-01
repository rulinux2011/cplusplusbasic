#include<iostream>
using namespace std;
class CFather
{
  public:
       int a;

};
class CSon:public CFather
{
  public:
       int b;
};
class COther
{
  public:
       double f;

};
int main()
{
     CFather* p;
     CSon* s;
     COther* o;
     p=static_cast<CFather*>(s);
     (COther*)s;
     return 0;
}
