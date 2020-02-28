#include <stdio.h>
#include <stdlib.h>

#define LARGO 100
#define SALIDA EOF


/*Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.*/
float tempConversion(float fahr) {
    float celsius;
    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}

