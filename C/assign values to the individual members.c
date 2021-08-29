#include<stdio.h>
#include<conio.h>
int swap(int , int);                       
main( )
{
    int a = 10, b = 20 ;                               
    swap(a,b);                                            
    printf ( "\na = %d b = %d", a, b ) ;
    getch();
}

int swap( int x, int y )                            
{ 
    int t ;
    t = x ;
    x = y ;
    y = t ;
    printf ( "\nx = %d y = %d", x, y ) ;
}