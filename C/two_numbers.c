#include <stdio.h> 
main() 
{ 
    int f, s, add, sub, mul; 
    float div; 
    printf ("Enter two integers\n"); 
    scanf ("%d %d", &f, &s); 
    add = f + s; 
    sub = f - s; 
    mul = f * s; 
    div = f / (float)s; 
    printf ("Sum = %d\n", add); 
    printf ("Difference = %d\n", sub); 
    printf ("Multiplication = %d\n", mul); 
    printf ("Division = %.2f\n", div);
}