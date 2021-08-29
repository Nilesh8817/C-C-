#include<iostream.h>
#include<conio.h>
template<class c> void sort(c a[],int n)
{
	c t;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				t =  a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
void main()
{
	clrscr();
	int x[30],n,i,j;
	cout<<"Enter Total number of Elements to Sort:=>";
	cin>>n;
	cout<<"Enter the values Values:=>";
	for (i = 0; i < n; ++i)
	{
		cin>>x[i];
	}
	sort(x,n);
	cout<<"Sorted List is:=>";
	for (i = 0; i < n; i++)
	{
		cout<<x[i]<<"\t";
	}
	cout<<endl;
	getch();
}
