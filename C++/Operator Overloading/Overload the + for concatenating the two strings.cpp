#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
char str[100];
public:
void input()
{
cout<<"enter the string\n";
cin>>(str);
}
void output()
{
cout<<"the string is\n";
cout<<str;
}
string operator+(string s);
};
string string::operator+(string s)
{
string temp;
strcpy(temp.str,str);
strcat(temp.str,s.str);
return(temp);
}
void main()
{
string s1,s2,s3;
clrscr();
s1.input();
s2.input();
s3=s1+s2;
s3.output();    
getch();      
}
