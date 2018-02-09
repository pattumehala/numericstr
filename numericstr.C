#include<stdio.h>
int main()
{
int i;
printf("Enter the string:\n");
scanf("%d",&i);
if(i>=1 && i<=32767)
{
printf("yes\n");
}
else
{
printf("no\n");
}
return 0;
}
