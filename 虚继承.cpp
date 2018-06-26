#include<iostream>
using namespace std;
class CA
{
  public:
       int a;
       CA()
       {
            a=10;
       }
};

class CB:virtual public CA
{
public:

};

class CC:virtual public CA
{
public:

};

class CD:public CB,public CC
{
public:

};
int main()
{
     CD d;
     cout<<d.a;
     return 0;
}
