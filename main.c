/* Takehome Final Part 3: Series
 * Calculates the sum of the series
 *
 * (k = 1 : inf) of 1/k^4 = pi/90
 * 
 * with error < 3 * macheps. Machine 
 * epsilon is estimated at start of program.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int
main (void)
{

    float macheps = 1.;
    while ((float) (1. + macheps) != 1.)
    {
        macheps /= 2;
    }
    printf ("macheps = %g\n", macheps);

    int n = 160, k;
    float f = 0;
    for (k = n; k >= 1.; k--)
    {
        f = f + (1. / pow (k, 4));
    }

    float err = (pow (M_PI, 4.) / 90.) - f;
    printf ("%g %d %g %g\n", f, n, err, macheps);






    return 0;
}
