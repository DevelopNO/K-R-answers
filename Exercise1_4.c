/* This program will print the celsius to fahr */
/* I didn't use features that weren't learned untill this point (e.g. += etc.) */

#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  celsius = lower;
  printf("fahr celsius\n");
  while(celsius <= upper)
  {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f %6.0f\n", fahr, celsius);
    celsius = celsius + step;
  }
  
  return 0;
}
