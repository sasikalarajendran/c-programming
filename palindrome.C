#include<stdio.h>
int main()
{
int n,revint=0,oriint,rem;
printf("enter a number");
scanf("%d",&n)
while(n!=0)
{
rem=n%10;
revint=revint*10+rem;
n/=10;
}
if(oriint==revint)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
return 0;
}

