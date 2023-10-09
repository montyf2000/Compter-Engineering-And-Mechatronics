#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    /* Chapter 5 exercise 1-3
    
    // Declare some variables
    int a = 1, b = 2;
    float f = 1.23f;

    // Use printf display text on the screen
    printf ("The variables are\na = %d\nb=%d\nf=%f\n", a, b, f);

    // Exit from main
    return 0;
    */

   float r = 10.1; // floast buace the radius is not an int
   float Volume, Surface;

   Volume = (4*M_PI*r*r*r)/3;
   Surface = 4*M_PI*r*r;

   printf("The surface area =%f\nThe volume =%f\n",Surface,Volume);

}
