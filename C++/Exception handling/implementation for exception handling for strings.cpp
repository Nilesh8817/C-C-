#include<iostream.h>
#include<conio.h>
#include <string.h>
int day;
int month;
int year;
void inputDate (int) throw (int day, invalidDay, invalidMonth);
void main()
{
    try 
    {

        cout << "\nEnter your birthday here in this format: mm/dd/yyyy--->: ";
        cout <<"Enter day here."; 
        cin >> day; 
        cout <<"Enter the month here."; 
        cin >> month;
        cout <<"Enter the year here.";
        cin >> year; 
        if (day > 31) 
            throw invalidDay;          
        if(month==1)
        cout << "January ";
    else
        if(month==2)
        cout << "February ";
    else
        if(month==3)
        cout << "March ";
    else
        if(month==4)
        cout << "April ";
    else
        if(month==5)
        cout << "May ";
    else
        if(month==6)
        cout << "June ";
    else
        if(month==7)
        cout << "July ";
    else
        if(month==8)
        cout << "August ";
    else
        if(month==9)
        cout << "September ";
    else
        if(month==10)
        cout << "October ";
    else
        if(month==11)
        cout << "November ";
    else
        if(month==12)
        cout << "December ";
    else 
        if (month > 12)
    throw invalidMonth;
    }
    catch (invalidDay)
    {
        cout <<"The value that you entered is invalid, try again."; 
    }
    catch (invalidMonth)
    {
        cout <<"The month you entered is invalid, try again."; 
    } 
cout << "The date is " << month << " " << day << "," << year << "." << endl;
}
