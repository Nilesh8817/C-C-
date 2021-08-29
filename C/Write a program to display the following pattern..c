int main()
{
 int i,j,k;
 for(i=1;i<=5;i++)
 {
  j=1;
  for(k=1;k<=i;k++)
  {
   printf("%d",j++);
  }
   j-=2;
   for(k=j;k<=i;k--)
  {
   printf("%d",j--);
  }
   printf("\n");
 }
 return 0;
}