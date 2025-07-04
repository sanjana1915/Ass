#include<stdio.h>
int main()
{
    float U,A,T,V,S;
    printf("enter initial velocity:");
    scanf("%f",&U);

     printf("enter acceleration:");
    scanf("%f",&A);
    
     printf("enter initial time:");
    scanf("%f",&T);

    V=U+A*T;
    S=U+A*T*T;

    printf("\n final velocity:%.2f",V);
     printf(" \ndistance:%.2f",S);
     return 0;
}