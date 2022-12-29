#include <stdio.h>

int main()
{
   float c, fh;

   printf("Enter temp in f: ");
   scanf("%f", &fh);

   c = (fh - 32) / 1.8;

   printf("Temp in C: %f\n", c);

    return 0;
}
