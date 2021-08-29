#include<iostream.h>
#include<conio.h>
class Demo
{
	int num,rev;
	void readNum()
	{
		cout<<"Enter a Number:";
		cin>>num;
	}
	public:
	void factorial()
	{
		int i,fact=1;
		readNum();
		for(i=1;i<=num;i++)
		{
			fact = fact * i;
		}
		cout<<"Factorial of "<<num<<":="<<fact<<endl;
	}
	void reverseNo()
	{
		readNum();
		int temp=num;
		rev=0;
		while(temp!=0)
		{
			rev = rev*10+temp%10;
			temp/=10;
		}
		cout<<"Reverse of "<<num<<":="<<rev<<endl;
	}
	int isPalindrome()
	{
        reverseNo();
		if(rev==num)
			return 0;

		else
			return 1;

	}
	void isArmstrong()
	{
		readNum();
		int d,temp=num,sum=0;
		while(temp!=0)
		{
			d = temp%10;
			sum+=d*d*d;
			temp=temp/10;
		}
		if(sum==num)
		{
			cout<<num<<"is Armstrong Number"<<endl;
		}
		else
			cout<<num<<"is not an Armstrong Number"<<endl;
	}
};
void main()
{
	clrscr();
	Demo d1;
	d1.factorial();
	d1.reverseNo();
	(d1.isPalindrome()==0)?cout<<"Palindrome"<<endl:cout<<"Not a Palindrome"<<endl;
	d1.isArmstrong();

	getch();
}
