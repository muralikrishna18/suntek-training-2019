#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,A,sum=0;
printf("enter value of n:");
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i+1]=0;
sum+=a[i];
}
for(i=0;i<n;i++)
{
if(b[a[i]]==0)
b[a[i]]=1;
else
{
A=a[i];
break;
}
}
int B=(n*n+n)/2-sum+A;
printf("A:%d\tB:%d",A,B);

}
