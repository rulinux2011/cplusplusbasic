#include<iostream>
using namespace std;
class A
{
public:
     int X=3;
     A()
     {
       X++;
     }
     ~A()
     {
       X++;
     }
};
int main()
{
     A ob;
     cout<<ob.X<<endl;
     return 0;
}
