#include<stdio.h>
int main()
{
    float surface_area,volume;
    float pi=3.14,r,h;

    printf("enter the radius of cylinder:");
    scanf("%f",&r);

    printf("enter the hight of cylinder");
    scanf("%f",&h);

    surface_area=2*pi*r*r+2*pi*r*h;
    volume=2*r*r*h;

     printf("\nsurface_area of cylinder:%.2f",surface_area);
     printf("\nvolume of cylinder:%.2f",volume);
     return 0;
}