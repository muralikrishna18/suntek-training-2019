#include<stdio.h>
float power(float x,int n);
int main()
{
int n;
float x;
printf("enter x and n values");
scanf("%f%d",&x,&n);
printf("%f",power(x,n));
return 0;
}
float power(float x,int n)

{
if(n==0||x==0)
return 1;
else return(x*power(x,n-1));
}
