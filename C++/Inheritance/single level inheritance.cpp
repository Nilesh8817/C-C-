#include<iostream.h>
#include<conio.h>
class Demo
{
	protected:
	int a,b;
	public:
	void read()
	{
		cout<<"Enter the Numbers";
		cin>>a>>b;
	}
};
class Demo1:private Demo
{
	int sum;
	public:
		void add()
		{		
			read();
			sum = a+b;
			cout<<"Addition of"<<a<<"and "<<b<<":="<<sum;
		}
};
 
void main()
{
	clrscr();
	Demo1 d1;
	d1.add();
	getch();
}
