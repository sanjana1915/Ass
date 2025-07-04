#include<stdio.h>
int main()
{
    int a,b,x,y;

    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);

    // using +,- operator

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swapping a:%d",a);
    printf("\nAfter swapping b:%d",b);

    // using *,/ operator


    printf("\nenter two numbers:");
    scanf("%d%d",&x,&y);
    
     x=x*y;
    y=x/y;
    x=x/y;

    printf("\nAfter swapping x:%d",x);
    printf("\nAfter swapping y:%d",y);

    return 0 ;

}