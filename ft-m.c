#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num;
    printf("Feet to meter\n");
    printf("Enter the amount of feet: ");
    scanf("%f", &num);
    printf("meter: %.3f\n", num/3.28);
    return 0;
}
