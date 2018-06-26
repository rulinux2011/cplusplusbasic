#include<stdio.h>
#include<iostream>

//方法一：形参为二维数组并给定第二维长度
/*
void subfun(int n, char subargs[][5])
{
    int i;
    for(i=0;i<n;i++) {
        printf("subargs[%d]=%s\n",i,subargs[i]);
    }
}

int main()
{
    char args[][5]={"abc","def","ghi"};
    subfun(3,args);
    return 0;
}
*/

//方法二：形参为指向数组的指针并给出数组长度
/*
void subfun(int n,char (*subargs)[5]){
    int i;
    for(i=0;i<n;++i){
        printf("subargs[%d]=%s\n",i,subargs[i]);
    }
}
int main(){
    char args[][5]={"abc","def","ghi"};
    subfun(3,args);
    return 0;
}
*/

//方法三：形参为指向数组的指针并给出数组长度
/*
void subfun(int n,char **subargs){
    int i;
    for(i=0;i<n;++i){
        printf("subargs[%d]=%s\n",i,subargs[i]);

    }
}
*/
void subfun(int n,char **subargs){
    for(int i=0;i<n;++i){
        for(int j=0;j<3;++j){
            std::cout<<*(*(subargs+i)+j);
        }
        std::cout<<std::endl;
    }
}
/*
int main(){
    char *a[3];
    char args[][5]={"abc","def","ghi"};
    a[0]=args[0];
    a[1]=args[1];
    a[2]=args[2];
    subfun(3,a);
}
*/

int main(){
    char *args[]={"abc","def","ghi"};
    subfun(3,args);
}
