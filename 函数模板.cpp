#include<iostream>
using namespace std;

/*重载
void fun(int a)
{
     cout<<a<<endl;
}

void fun(double b)
{
     cout<<b<<endl;
}
*/

struct Node
{
     int a;
     double b;
};

template <class Tt>
void fun(Tt a)
{
   cout<<a<<endl;
}
/*
//具体化
template <> void fun2<Node>(Node nd)
{
     cout<<nd.a<<" "<<nd.b<<endl;
}

template <typename T,typename Y>
void fun(T a,Y b)
{
     cout<<a<<" "<<b<<endl;
}
template <typename TT,typename YY>
void fun1(TT a,YY b)
{
     cout<<a<<" "<<b<<endl;
}

*/
template void fun<int>(int a);

int main()
{
     Node nd={12,12.12};
     fun(nd);
     return 0;
}
