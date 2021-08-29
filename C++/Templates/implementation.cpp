#include<iostream.h>
#include<conio.h>
template<class c> c add(c a,c b)
{
	return (a+b);
}
void main()
{
	cout<<add(5,6)<<endl;
	cout<<add(3.5,6.2)<<endl;
	getch();
}
