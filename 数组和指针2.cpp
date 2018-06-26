
#include <iostream>
 int main()
 {

    const char *s= "hello";
    printf("%s\n",s);
    printf("%p\n",s);


    int a[10]={1,4,9,16,25,36,49};
    int *p1=a;
    int *p2=&a[5];
    printf("p1=%p\n",p1);
    printf("p2=%p\n",p2);
    printf("p2-p1=%p\n",p2-p1);




   char b[5]={'A','B','C','D'};
   char (*p3)[5] = &b;
   //char (*p4)[5] = a;


    return 0;
 }
