#include <stdio.h>
main()
{
double a, b, c, root, x1, x2;
printf ("Enter value for a: ");
scanf ("%d", &a);
printf ("Enter value for b: ");
scanf ("%d", &b);
printf ("Enter value for c: ");
scanf ("%d", &c);
root = sqrt(b * b - 4 * a * c);
x1 = ( - b + root) / (2 * a);
x2 = ( - b - root) / (2 * a);
printf ("\nSolution of Quadratic Equation is %f and %f", x1, x2);
}