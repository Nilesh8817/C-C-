#include<stdio.h>
#define PI 3.14
main()
{
int side, radius, length, breadth;
printf ("\nArea of Square");
printf ("\nEnter the side:");
scanf ("%d", &side);
printf ("\nThe Area of a square is: %d", side*side);
printf ("\nArea of Rectangle");
printf ("\nEnter the length:");
scanf ("%d", &length);
printf ("\nEnter the breadth:");
scanf ("%d", &breadth);
printf ("\nThe Area of rectangle is: %d", length*breadth);
printf ("\nArea of Circle");
printf ("\nEnter the radius:");
scanf ("%d", &radius);
printf ("\nThe Area of a circle is: %.2f", PI*radius*radius);
}