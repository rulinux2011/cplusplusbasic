#include<iostream>
using namespace std;
//基类，父类
class CPeople
{
public:
      void study()
      {
            cout<<"study"<<endl;
      }
};

//子类，派生类
class CChild:public CPeople
{
public:
      void gotoschool()
      {
            cout<<"gotoschool"<<endl;
      }
};

class CManWoman:public CPeople
{
public:
      void gotowork()
      {
            cout<<"gotowork"<<endl;
      }

};

class COldMan:public CPeople
{
public:
      void gotopark()
      {
            cout<<"gotopark"<<endl;
      }
};

int main()
{
      CChild child;
      child.study();

      COldMan oldman;
      oldman.study();

      CPeople people;
      people.study();

      CManWoman *manwoman=new CManWoman;
      manwoman->study();
      return 0;
}
