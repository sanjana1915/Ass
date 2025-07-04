#include<stdio.h>
int main()
{
    float pi=3.14;
    float area,crcnf,r;
    printf("enter the radius of ciecle");
    scanf("%f",&r);
    area = pi * r * r;
    crcnf = 2 * pi * r;
    printf("area of circle:%f",area);
    printf("circumference of circle :%f",crcnf);
    return 0;

}