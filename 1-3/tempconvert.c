#include <stdio.h>

/* prints Fahrenheit-Celsius table */

main() {
  int lower, upper, step;
  float fahr, celsius;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Fahrenheit     Celsius\n");
    
  while(fahr <= upper){
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%10.0f %11.1f\n", fahr, celsius);
    fahr += 20;
  }
}
  
    
    
