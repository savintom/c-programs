#include<stdio.h>
int sum(int x,int y);
int main()
{
printf("sum=%d",sum(10,10));
return 0;
}
int sum(int x,int y)
{
int s;
s=x+y;
return s;
}
