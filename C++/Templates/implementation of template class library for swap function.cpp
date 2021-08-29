#include<iostream.h>
#include<conio.h>
template<class c> void swap(c &a,c &b)
{
	c temp;
	temp = a;
	a = b;
	b = temp;
}
void main()
{
	clrscr();
	int a,b;
	float x,y;
	cout<<"Enter Two Integer Values:=>";
	cin>>a>>b;
	cout<<"Enter Two Decimal Values:=>";
	cin>>x>>y;
	cout<<"\t----------Result of Integer Swapping----------"<<endl;
	cout<<"Before Swapping"<<endl;
	cout<<"a="<<a<<"\tb="<<b<<endl;
	swap(a,b);
	cout<<"After Swapping"<<endl;
	cout<<"a="<<a<<"\tb="<<b<<endl;
	cout<<"\t----------Result of Decimal Swapping----------"<<endl;
	cout<<"Before Swapping"<<endl;
	cout<<"x="<<x<<"\ty="<<b<<endl;
	swap(x,y);
	cout<<"After Swapping"<<endl;
	cout<<"a="<<a<<"\tb="<<b<<endl;
	getch();
}
