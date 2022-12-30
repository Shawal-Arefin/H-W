#include <stdio.h>

int main()
{
   int r;
   float p = 3.1416,ar;

   printf("Enter the radius of the circle: ");
   scanf("%d", &r);

   ar = p * r * r;

   printf("Area of the circle: %f", ar);
   return 0;
}
