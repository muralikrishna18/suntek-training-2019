#include<stdio.h>
void main()
{
int n,i;
float x,k=1;
scanf("%f%d",&x,&n);
for(i=1;i<=n;i++)
k*=x;
printf("%f",k);
}
