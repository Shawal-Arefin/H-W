#include <stdio.h>
#include <conio.h>

int main() {

  int y, m, d, td, diy, trd, rm_days, dim;

  printf("Calculating the number of days months & years from total days \n");
  printf("\n");
  printf("Enter the number of days: ");
  scanf("%d", &td);

  y = td / 365;

  diy = y * 365;

  trd = td - diy;

  m = trd / 30;

  dim = m * 30;

  rm_days = trd - dim;

  printf("Years: %d \n Month: %d\n days: %d\n", y, m, rm_days);

  return 0;
}
