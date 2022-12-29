#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float c, fh;

    printf("Enter temp in celcius: \n");
    scanf("%f", &c);
    fh = (c * 9/5) +32;

    printf("Temperature in Fahrenheit: %f\n", fh);
    return 0;
}
