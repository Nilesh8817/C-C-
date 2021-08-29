#include<iostream.h>
#include<conio.h>
class Complex
{
int real,imag;
public:
void readData()
{
cout<<"enter real and imag part";
cin>>real>>imag;
}
friend Complex add(Complex,Complex);
void display();
};
void Complex::display()
{
cout<<"the sum of complex num is"<<real<<"+i"<<imag;
}
Complex add(Complex a,Complex b)
{
Complex t;
t.real=a.real+b.real;
t.imag=a.imag+b.imag;
return t;
}
void main()
{
Complex a,b,c;
clrscr();
a.readData();
b.readData();
c=add(a,b);
c.display();
getch();
}
