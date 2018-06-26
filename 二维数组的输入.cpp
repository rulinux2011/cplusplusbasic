#include<stdio.h>
#include<malloc.h>
#define N 4 //定义一个4列的二维数组，每一行的存储空间需要动态申请
int main()
{
    int **p; //定义二维指针。
    int m,n;//行数和列数。
    int i,j;

    scanf("%d%d",&m,&n); //输入行数和列数。
    if(m<=0||n<=0) return -1; //行数或列数非法。

    p=(int **)malloc(sizeof(int *)*m);//申请一组一维指针空间。
    for(i=0;i<m;i++)
        p[i]=(int *)malloc(sizeof(int) *n); //对于每个一维指针，申请一行数据的空间。

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            //scanf("%d",&p[i][j]);//输入第i行第j列的数据。其中&p[i][j]也可以写作p[i]+j或者是 *(p+i) + j. 功能相同。
            scanf("%d",(p+i)+j);

    printf("输入的数组为%d行%d列：\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)//这个循环可以输出一行元素。
            printf("%d ",p[i][j]);//输出i行j列的元素。
        printf("\n");//每行输入结束加换行符。
    }

    //释放内存
    for(i=0;i<m;i++)
        free(p[i]);
    free(p);

    return 0;
}
