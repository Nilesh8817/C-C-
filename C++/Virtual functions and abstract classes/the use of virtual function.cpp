#include<iostream.h>
#include<conio.h>
class Base
{
public:
int x,y;
virtual void getData()
{
cout <<"Enter values two values";
cin>>x>>y;
}
virtual void display()
{
cout <<"X="<<x<<endl<<"Y="<<y<<endl;
}
};
class Derived:public Base
{
public:
int z;
virtual void getData()
{
cout <<"Enter values three values";
cin>>x>>y>>z;
}
virtual void display()
{
cout <<"X="<<x<<endl<<"Y="<<y<<endl<<"Z="<<z<<endl;
}
};
void main()
{
clrscr();
Base *bptr;    //Base class pointer
Base b1;	//Base class object
Derived d1;     //Derived class object
bptr = &b1;
bptr->getData();
bptr->display();
bptr = &d1;
bptr->getData();
bptr->display();
getch();
}
