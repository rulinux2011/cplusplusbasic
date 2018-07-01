#include<iostream>
using namespace std;

template <typename X>
class CAA
{
public:
     int a;
};

template <typename T,typename Y>
class CFather
{
public:
     CFather(CAA<char>& a)
     {

     }
     void fun()
     {
          cout<<"CFather"<<endl;
     }
};

int main()
{
     CAA<char>ac;
     CFather<int,CAA<char>> pf(ac);

     return 0;
}
