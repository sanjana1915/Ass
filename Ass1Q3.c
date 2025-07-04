#include<stdio.h>
int main()
{
    float F,C,K;

    printf("enter tempreture in fahrenheit:");
    scanf("%f",&F);

    C=5/9*(F-32);
    K=C+273.15;

    printf("\nenter tempreture in celcius:%.2f",C);
    printf("\nenter tempreture in kelvin:%.2f",K);

    return 0;

}