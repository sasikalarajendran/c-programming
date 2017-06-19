#include<stdio.h>
int main()
{
char e;
printf("enter a character");
scanf("%c",&e);
if(e>='a'&&e<='z')||(e>='A'&&e<='Z')
{
printf("\n this is an alphabet");
}
else
{
printf("\n this is not an alphabet");
}
return 0;
}
