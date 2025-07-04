#include<stdio.h>
int main()
{
    float l,w,h;
    float wallarea,roofarea;

    printf("Enter length, width and hight of room:");
    scanf("%f %f %f",&l,&w,&h);

    wallarea=2*(l+w)*h;
    roofarea=l*w;

    printf("\nArea of wall:%f",wallarea);
     printf("\nArea of roof:%f",roofarea);
     return 0;

}