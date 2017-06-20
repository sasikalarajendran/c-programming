#include<stdio.h>
int main()
{
int i,m,n;
printf("enter two intervals");
scanf("%d%d",&m,&n);
for (i=m;i<=n;i++)
{
if(i%2==1)
printf("odd numbers between two intervals");
else
printf("no range");
}
return 0;
}
