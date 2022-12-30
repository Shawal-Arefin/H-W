#include <stdio.h>

int main()
{
   int side1, side2, area;

   printf("enter the value of 1st side: ");
   scanf("%d", &side1);

   printf("enter the value of 2nd side: ");
   scanf("%d", &side2);

   area = side1 * side2;

   printf("Area of square: %d", area);

   return 0;
}
