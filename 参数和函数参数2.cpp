#include<iostream>
using namespace std;
/*
void function(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
*/

void function(){

}


int main(){
    int a=1,b=2;
    int *p1=&a;
    int *p2=&b;
    function(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}


