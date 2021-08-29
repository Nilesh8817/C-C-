#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class Operation
{
	public:
	void read()
	{
		char c,fname[10];
		cout<<"Enter file name:";
		cin>>fname;
		ifstream in(fname);
		if(!in)
		{
			cout<<"File Does not Exist";
		}
		cout<<"\n\n";
		while(in.eof()==0)
		{
			in.get(c);
			cout<<c;
		}
	}
	void copy()
	{
		ofstream outfile;
		ifstream  infile;
		char fname1[10],fname2[20];
		char ch,uch;
		clrscr( );
		cout<<"Enter a file name to be copied ";
		cin>> fname1;
		cout<<"Enter new file name";
		cin>>fname2;
		infile.open(fname1);
		if(infile.fail())
		{
			cout<< " No such a file Exit";
		}
		outfile.open( fname2);
		if(outfile.fail( ))
		{
			cout<<"Unable to create a file";
		}
		while( !infile.eof( ) )
		{
			ch = (char) infile.get( );
			//uch = toupper(ch);
			outfile.put(ch);
		}
		infile.close( );
		outfile.close( );
	}
	void del()
	{
	char c,fname[10];
	      clrscr();
	      cout<<"Enter file name:";
	      cin>>fname;
	      ifstream in(fname);
	      if(!in)
	      {
			    cout<<"File Does not Exist";
			    getch();
			    return;
	      }
	      Remove(fname);
	}
};
void main()
{
	Operation op;
	int choice;
	cout<<"\tChoose the Operation to Perform for Handling Files:"<<endl;
	cout<<"1:Read the Contents"<<endl<<"2:Copying the Contents"<<endl<<"3:Deleting File";
	cin>>choice;
	switch(choice)
	{
		case 1:
			op.read();
			break;
		case 2:
			op.copy();
			break;
		case 3:
			op.del();
			break;
		default:
			cout<<"Please Enter Proper choice";
	}
        getch();
}
