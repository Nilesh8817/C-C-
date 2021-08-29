#include<iostream.h>
#include<conio.h>
class Employee
{
		int Emp_ID,Salary;
		char Emp_Name[20],Desig[20];
		void getInfo()
		{
			cout<<"Enter the Details:"<<endl;
			cin>>Emp_ID>>Emp_Name>>Desig>>Salary;
		}
		public:
		void displayInfo()
		{
			getInfo();
			cout<<"\t\tDisplaying Details"<<endl;
			cout<<"Employee ID::"<<Emp_ID<<endl;
			cout<<"Employee Name::"<<Emp_Name<<endl;
			cout<<"Designation of Employee::"<<Desig<<endl;
			cout<<"Salary::"<<Salary;
		}
};
void main()
{
		clrscr();
		Employee e1;
		e1.displayInfo();
		getch();
}