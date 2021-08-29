#include<iostream.h>
#include<conio.h>
class Complex
{
	public:
	int x,y;
		Complex(int a,int b)
		{
			x = a;
			y = b;
		}
		friend Complex add(Complex c1,Complex c2);
		void display()
		{
			if(y<0)
				cout<<x<<y<<"i";
			else
				cout<<x<<"+"<<y<<"i";
		}
};
Complex add(Complex c1,Complex c2)
{
	int x,y;
	Complex t(x,y);
			t.x=c1.x+c2.x;
			t.y=c1.y+c2.y;
			return t;
		}
void main()
{
	clrscr();
	int x,y;
	cout<<"Enter the real & imaginary parts of a complex number";
	cin>>x>>y;
	Complex c1(x,y);
	cout<<"Enter the real & imaginary parts of a complex number";
	cin>>x>>y;
	Complex c2(x,y);
	Complex c3 = add(c1,c2);
	c3.display();
	getch();
}
