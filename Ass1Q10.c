#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,dist;
    printf("Enter x1 and y1 coordinates for first point:");
    scanf("%d %d",&x1,&y1);
    printf("Enter x2 and y2 coordinates for first point:");
    scanf("%d %d",&x2,&y2);
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   printf("Distance is:%d",dist);
    return 0;

}