#include<stdio.h>
long long int fact(int n);
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
if(n<0)
{
printf("factorial does not exist for negative numbers");
goto l1;
}
else
{
printf("%lld",fact(n));
}
l1:return 0;
}
long long int fact(int n)
{
if(n==0)
return 1;
else return(n*fact(n-1));
}
