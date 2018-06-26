#include<stdio.h>
#include<string.h>
/*
void example(char acWelcome[]){
    printf("%d",sizeof(acWelcome));
    return;
}

int main(){
    char acWelcome[]="Welcome to Huawei Test";
    example(acWelcome);
    printf("\n%d\n",sizeof(acWelcome));
    return 0;
}
*/

void Func(char str_arg[100])
{
       printf("%d\n",sizeof(str_arg));
}
int main()
{
     char str[]="Hello";
    printf("%d\n",sizeof(str));
    printf("%d\n",strlen(str));
    char*p=str;
    printf("%d\n",sizeof(str));
    printf("%d\n",sizeof(p));//÷∏’Î
    Func(str);//÷∏’Î
}

