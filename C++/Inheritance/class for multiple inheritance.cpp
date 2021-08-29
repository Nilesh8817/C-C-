#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int rno;
	char name[30];
	public:
	void get()
	{
		cout<<"Enter the Roll no :";
		cin>>rno;
		cout<<"Enter the Name of Student   :";
		cin>>name;
	}
};
class marks
{
	protected:
	int m1,m2,m3,m4,m5;                   // sm = Sports mark
	public:
	void getMarks()
	{
		cout<<"\nEnter the Marks of Student:";
		cin>>m1>>m2>>m3>>m4>>m5;
	}
};
class statement:public student,public marks
{
	int tot;
	float per;
	public:
	void display()
	{
		tot=(m1+m2+m3+m4+m5);
		per=tot/5;
		cout<<"\n\n\tRoll No    : "<<rno<<"\n\tTotal      : "<<tot;
		cout<<"\n\tPercentage    : "<<per;
	}
};
void main()
{
   clrscr();
   statement obj;
   obj.get();
   obj.getMarks();
   obj.display();
   getch();
}
