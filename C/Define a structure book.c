#include<stdio.h>
#include<conio.h>
struct book_bank;
{
       char title[20];
       char author[15];
       int pages;
       float price;
       }            
void main()
{
     struct book_bank book1;  
     printf(" Input title, author, pages and price of the book \n");
     gets(book1.title);
     gets(book1.author);
     scanf(" %d %f",&book1.pages,&book1.price);
     puts(book1.title);
     puts(book1.author);     
     printf(" %d \n%f",book1.pages,book1.price); 

     getch();
}