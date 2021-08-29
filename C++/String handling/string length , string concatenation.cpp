#include<iostream.h>
#include<string.h>
#include<conio.h>
void concat(char[], char[]);
void main()
{
	clrscr();
	char s1[30], s2[30];
	int len=0,j;
	cout<<"\nEnter String 1 :";
	cin>>s1;
	cout<<"\nEnter String 2 :";
	cin>>s2;
	while (s1[len] != '\0')
		len++;
	cout<<"\nLength of the String is" << len<<endl;

	//len = strlen(s1);
	for (j = 0; s2[j] != '\0'; len++, j++)
	{
		s1[len] = s2[j];
	}
	s1[len] = '\0';
	cout<<"nConcated string:=>"<<s1<<endl;
	getch();
}
