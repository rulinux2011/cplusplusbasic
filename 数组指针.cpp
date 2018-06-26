#include<iostream>
using namespace std;

int main(){
    int a[]={3,5,7};
    int *pg=a;
    cout<<*pg<<endl;
    cout<<pg<<endl;
    cout<<*pg+1<<endl;
    cout<<*(pg+1)<<endl;
    cout<<pg+1<<endl;

    cout<<"***"<<endl;




    cout<<endl;
    char b[]={'a','b','c','d'};
    char *pw=b;
    cout<<*pw<<endl;
    cout<<pw<<endl;
    cout<<*pw+1<<endl;
    cout<<*(pw+1)<<endl;
    cout<<pw+1<<endl;

    cout<<"***"<<endl;
    const char *p;
    p="abcde";
    cout<<p<<endl;
    cout<<*p<<endl;

    const char *c="I love China!";
    int n;
    cin>>n;
    if(n>=0||n<13){
        cout<<c+n<<endl;
    }


    return 0;
}
