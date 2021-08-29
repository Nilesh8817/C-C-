#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int i;

    printf("Enter information of students:\n");

    for(i=0; i<10; ++i)
    {
        s[i].roll = i+1;

        printf("\nFor roll number%d,\n",s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks: ");
        scanf("%f",&s[i].marks);

        printf("\n");
    }

    printf("Displaying Information:\n\n");
    for(i=0; i<10; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}



9. Define a structure book containing 3 members called title, author and price. Write a 
Program that would assign values to the individual members and display the same. 

/* Sample structure program in C language */
#include<stdio.h>
#include<conio.h>

struct book_bank
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