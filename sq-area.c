#include <stdio.h>

int main()
{
   int side, area;

   printf("enter the value of side: ");
   scanf("%d", &side);

   area = side * side;

   printf("Area of square: %d", area);

   return 0;
}
