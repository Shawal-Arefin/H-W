#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("enter two values: ");
    scanf("%d %d", &a, &b);
    printf("a= %d, b= %d\n", a, b);


    //value switch

    int abc = a;
    a = b;
    b = abc;

    printf("a= %d, a= %d", a, b);

    return 0;
}
