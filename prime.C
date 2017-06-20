#include<stdio.h>
int main()
{
int n,i;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n,i++)
{
if(n%2==0)
printf("\n not a prime number");
else
printf("prime number");
}return 0;
}
