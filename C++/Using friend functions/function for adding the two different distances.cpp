#include<iostream.h>
#include<conio.h>
class Distance
{
	int ft,inc;
	public:
	void readData()
	{
		cout<<"Enter the distance in feet and inches";
		cin>>ft>>inc;
	}
	friend Distance add(Distance d1,Distance d2);
	void display()
	{
		cout<<"Distance is "<<ft<<" feet and "<<inc<<" inches"<<endl;
	}
};
Distance add(Distance d1,Distance d2)
{
	Distance dr;
	dr.ft = d1.ft+d2.ft;
	dr.inc = d1.inc+d2.inc;
	if(dr.inc>=12)
	{
		dr.ft++;dr.inc=dr.inc-12;
	}
	return dr;
}
void main()
{
	clrscr();
	Distance d1;
	Distance d2;
	Distance d3;
	d1.readData();
	d2.readData();
	d3 = add(d1,d2);
	d3.display();
	getch();
}
