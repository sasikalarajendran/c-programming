#include<stdio.h>
int main()
{
int n1,n2,n3;
printf("enter the numbers");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2&&n1>n3)
{
printf("n1 is the largest number");
}
elsif(n2>n1&&n2>n3)
{
printf("n2 is the largest number");
}
else
{
printf("n3 is the largest number");
}
return 0;
}
