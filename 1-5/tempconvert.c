#include <stdio.h>

/* prints Fahrenheit-Celsius table in reverse using a for loop*/

main() {
  float fahr;

  printf("Fahrenheit     Celsius\n");
  for(fahr = 300; fahr >= 0; fahr = fahr - 20){
    printf("%10.0f %11.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }
}
    
