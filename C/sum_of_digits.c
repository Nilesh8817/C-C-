#include<stdio.h>
void main()
{
    long num,temp,digit,sum=0;
    printf("enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num/=10;
    }
    printf("given number=%1d\n",temp);
    printf("sum of digits %d=%1d\n",temp,sum);
}