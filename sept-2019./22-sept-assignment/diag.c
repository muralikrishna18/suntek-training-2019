#include<stdio.h>
void main()
{
int i,j,k,n;
printf("enter the n value:");
scanf("%d",&n);
printf("enter %d elements into array",n*n);
int a[n][n],d[n*n],b=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(k=0;k<=2*(n-1);k++)
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(i+j==k)
d[b++]=a[j][i];
for(i=0;i<n*n;i++)
printf("%d ",d[i]);
}
