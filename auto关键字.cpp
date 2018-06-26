#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
/*
    int a=10;
    auto au=a;
    cout<<typeid(au).name()<<endl;
    return 0;
*/

/*
int a=10;
int &b=a;
auto c=b;
auto &d=b;

cout<<c<<endl<<d<<endl;

return 0;
*/

int a3[3] = { 1, 2, 3 };
auto b3 = a3;
cout << typeid(b3).name() << endl;

int a7[3] = { 1, 2, 3 };
auto & b7 = a7;
cout << typeid(b7).name() << endl;

cout<<sizeof(char)<<endl;
return 0;
}
