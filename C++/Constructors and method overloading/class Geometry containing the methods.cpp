#include<iostream.h>
#include<conio.h>
#include<math.h>
class Geometry
{
	public:
		void volume(float r)
		{
			float vol = (4*3.142/3*r*r*r);
			cout<<"Volume of sphere=>"<<vol<<endl;
		}
		void area(float r)
		{
			cout<<"Area of Circle:=>"<<(3.142*r*r)<<endl;
		}
		void area(float l,float b)
		{
			cout<<"Area of Circle:=>"<<(l*b)<<endl;
		}
};
void main()
{
	clrscr();
	Geometry g1;
	g1.volume(3.5);
	g1.area(3.5);
	g1.area(3.5,2.0);
	getch();
}
