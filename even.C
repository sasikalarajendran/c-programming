#include<stdio.h>
int main()
{
int i,m,n;
printf("enter two intervals");
scanf("%d%d",&m,&n);
for(int i=m;m<=n;i++)
{
if(n%2==0)
{
printf("even numbers between two intervals");
else
printf("no range");
}
return 0;
}
