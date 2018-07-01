#include<iostream>
using namespace std;

template <typename T,typename Y=int>
class CFather
{
public:
     T a;
     CFather(T t)
     {
          a=12;
     }
     void show()
     {
         cout<<"show"<<endl;
     }

};
template <typename X,typename Z>
class CSon:public CFather<X,Z>
{
public:
     CSon():CFather<X,Z>(1)
     {

     }

};

int main()
{
     CSon<int,char> so;
     so.show();
     return 0;
}
