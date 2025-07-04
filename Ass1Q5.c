#include<stdio.h>
int main()
{
    int a,b;
    int AM,HM;
    printf("enter two number:");
    scanf("%d%d",&a,&b);

    AM=(a+b)/2;
    HM=a*b/(a+b);

    printf("\n arithmatic mean:%.2d",AM);
    printf("\n harmonic mean:%.2d",HM);

    return 0;

}