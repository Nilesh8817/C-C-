#include<iostream.h>
#include<conio.h>
class space
{
	int x;
	int y;
	int z;
	public:
	void getdata()
	{
		cout<<"Enter the Numbers";
		cin>>x>>y>>z;
	}
	void display()
	{
		cout<<x<<" ";
		cout<<y<<" ";
		cout<<z<<"\n";
	}

	void operator-()
	{
		x=-x;
		y=-y;
		z=-z;
	}

};
void main()
{
	clrscr();
	space s;
	s.getdata();
	s.display();
	-s;
	s.display();
	getch();
}
