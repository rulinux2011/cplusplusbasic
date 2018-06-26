#include<iostream>
using namespace std;

void fun(int &a){  //引用
    a=13;
    cout<<a<<endl;
}

void fun1(int a){
    a=14;
    cout<<"fun1:"<<a<<endl;

}

void fun2(int *a){
    *a=15;
    cout<<"fun2:"<<*a<<endl;
}

int main(){
    int b=12;
    fun(b);
    cout<<b<<endl;
    fun1(b);
    cout<<b<<endl;
    fun2(&b);
    cout<<b<<endl;

    return 0;
}
