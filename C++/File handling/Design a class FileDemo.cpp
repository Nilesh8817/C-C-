#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 ifstream fin("story.txt"); //opening text file
 int line=1,word=1,size; //will not count first word and last line so initial value is 1
 char ch;
 fin.seekg(0,ios::end); //bring file pointer position to end of file
 size=fin.tellg(); //count number of bytes till current postion for file pointer
 fin.seekg(0,ios::beg); //bring position of file pointer to begining of file
 while(fin)
 {
  fin.get(ch);
  if(ch==' '||ch=='n')
   word++;
   
  if(ch=='n')
   line++;
 } 
 
 cout<<"Lines="<<line<<"nWords="<<word<<"nSize="<<size<<"n";
 fin.close(); //closing file
 getch();
}
