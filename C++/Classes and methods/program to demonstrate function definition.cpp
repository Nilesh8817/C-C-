#include<iostream.h>
#include<conio.h>
class Demo
{
	int num,rev;
	public:
	void factorial();
};
void Demo::factorial()
{
	int fact=1,a,i;
	cout<<"Enter the Number:";
	cin>>a;
	for(i=a;i>=1;i--)
		fact = fact*i;
	cout<<"Factorial of "<<a<<":="<<fact<<endl;
}
void main()
{
	clrscr();
	Demo d1;
	d1.factorial();
	getch();
}
