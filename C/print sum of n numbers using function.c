#include <stdio.h>
#include <conio.h>
 
int main(){
      
    int numberCount=0, number, counter, sum=0;
     
    printf("Enter the number of integers to add: ");
    scanf("%d",&numberCount);
     
    printf("Enter %d numbers seperated by space \n", numberCount);
    for(counter = 0; counter < numberCount; counter++){
        scanf("%d", &number);
        sum = sum + number;
    }
    printf("SUM = %d", sum);
    getch();
    return 0;
}