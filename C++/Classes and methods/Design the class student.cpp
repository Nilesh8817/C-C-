#include<iostream.h>
#include<conio.h>
class Student
{
	int Stud_RollNo;
	char Stud_Name[20],Class[20];
	void getData()
	{
		cout<<"Enter the Details:"<<endl;
		cin>>Stud_RollNo>>Stud_Name>>Class;
	}
	public:
	void displayData()
	{
		getData();
		cout<<"\t\tDisplaying Details"<<endl;
		cout<<"Student RollNo::"<<Stud_RollNo<<endl;
		cout<<"Student Name::"<<Stud_Name<<endl;
		cout<<"Student Class::"<<Class<<endl;
	}
};
void main()
{
	clrscr();
	Student s1;
	s1.displayData();
	getch();
}
