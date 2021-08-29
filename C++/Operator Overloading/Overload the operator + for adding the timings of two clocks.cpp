#include<iostream.h>    #include<conio.h>
class time
{
	int h,m;
	public:
	void read()
	{
		cout<<"\nEnter hour and minutes\n";
		cin>>h>>m;
	}
	void print()
	{
		cout<<"\nTime is-> "<<h<<"hours and "<<m<<"minutes";
	}
	time operator+(time t2)
	{
		time t;
		t.h=h+t2.h;
		t.m=m+t2.m;
		if(t.m>=60)
		{
			t.h++;
			t.m=t.m-60;
		}
		return t;
	}
};
void main()
{
	clrscr();
	time t1,t2,t3;
	t1.read();
	t2.read();
	t3=t1+t2;
	t3.print();
	getch();    
}
