#include<iostream.h>
#include<conio.h>
class Base
{
public:
int x,y;
void getData()
{
cout <<"Enter values two values";
cin>>x>>y;
}
void display()
{
cout <<"X="<<x<<endl<<"Y="<<y<<endl;
}
};
class Derived:public Base
{
public:
int x,y,z;
void getData()
{
cout <<"Enter values three values";
cin>>x>>y>>z;
}
void display()
{
cout <<"X="<<x<<endl<<"Y="<<y<<endl<<"Z="<<z<<endl;
}
};
void main()
{
clrscr();
Base *bptr;    //Base class pointer
Derived d1;     //Derived class object
bptr = &d1;
bptr->getData();
bptr->display();
getch();
}
