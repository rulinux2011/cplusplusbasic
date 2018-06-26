#include<iostream>

using namespace std;
using std::string;

int main(){
    char str[]="we are poor students";
    cout<<str<<endl;

 /*   //指针访问每个字符并输出。
    char *p = str;
    while (*p != '\0')
    {
       cout << *p;
       //cout<<p<<endl;//结果是一个倒金字塔
       p++;
    }
    */

    string str1="hello world";
    string *p1 = &str1; //注意必须加取地址运算符 &
    cout << str1 << "," << *p1;

    const char* s1="hello";;

    char s2[]="world";

    *(s2+2)='x';
    //*(s1+2)='x';//能通过编译，但会运行错误，S1其实是只读的，无法修改内容





    return 0;
}
