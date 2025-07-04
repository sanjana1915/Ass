#include <stdio.h>
int main()
{
    int one, five, ten, amt;

    printf("Enter amount :");
    scanf("%d", &amt);

    ten = amt / 10;
    amt %= 10;

    five = amt / 5;
    amt %= 5;

    one = amt;

    printf("\nten RS:%d", ten);
    printf("\nfive RS:%d", five);
    printf("\none RS:%d", one);

    return 0;
}