// Converts Faharenheit temperature to Celsius
// C allows the entire code to be compacted with some exceptions
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main (void){float fahrenheit,celsius;printf("Enter fahrenheit temperature:");scanf("%f", &fahrenheit);celsius=(fahrenheit-FREEZING_PT)*SCALE_FACTOR;printf("Celsius equivalent: %.1f\n", celsius);return 0;}
// This is for educational purposes and I do not belive that writing code like this is a smart thing to do
