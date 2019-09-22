#include<stdio.h>
int fib(int n);
int main()
{
int n,k,i;
scanf("%d",&n);
if(n<=0)
return(0);
else
{
for(i=1;i<=n;i++)
{
k=fib(i);
printf(" %d  \t",k);
}
}
}
int fib(int n)
{
if(n==1)
return (0);
else if(n==2)
return (1);
else
return (fib(n-1)+fib(n-2));
}
