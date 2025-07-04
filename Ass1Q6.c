#include<stdio.h>
int main()
{
    int l,b,h;
    int surface_area,volume;

    printf("enter three dimentions:");
    scanf("%d%d%d",&l,&b,&h);

    surface_area=2*(l*b+l*h+b*h);
    volume=l*b*h;

    printf("\n surface area:%d",surface_area);
    printf("\n volume:%d",volume);

    return 0;

}