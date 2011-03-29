#include <stdio.h>

/* prints Celsius-Fahrenheit table */

main() {
  int lower, upper, step;
  float fahr, celsius;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;

  printf("Celsius     Fahrenheit\n");
  while(celsius <= upper){
    fahr = (9.0 * celsius / 5.0) +32.0;
    printf("%7.1f %14.1f\n", celsius, fahr);
    celsius += step;
  }
}
  
    
    
