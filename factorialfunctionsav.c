#include<stdio.h>

int fact(int n)
{
if(n!=0)
{
return n*fact(n-1);
}
else
return 1;
}
void main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
printf("the factorial of %d is %d",n,fact(n));
}
