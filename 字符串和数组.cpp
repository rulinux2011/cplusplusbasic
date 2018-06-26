#include<iostream>
using namespace std;


int main(){
    char a[]="hello";//定义字符串
    char *p = a;
    cout <<a<<endl;//输出的是hello
    cout<<p<<endl;
    cout<<*p<<endl; //指针指向首地址，所以输出为 h


    char b[] = { 'h','e','l','l','o' };
    char *pchar = b;
    cout << *pchar<<endl;//该语句输出 h
    //cout << b<<endl; //不要用这个方式输出，输出的是 hello加一些乱码字
    cout << b[0]<<endl;; //该语句输出 h


    //以下语句实现用指针输出hello。
    for (size_t i = 0; i < 5; i++)
    {
        cout << *pchar;
        pchar++;
    }

    return 0;
}
