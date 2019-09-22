#include <stdio.h>
#include<math.h>
int main()
{
   int num, i, j = 0;

   printf("Enter number: ");
   scanf("%d", &num);
   if(num==1)
   {
	printf("it is neither prime nor composite ");
	return(0);
    }
    
   //check for prime number

   for (i = 2; i <=sqrt(num);i++)
   {
      if ((num % i) == 0)
         {
           printf("%d is not a prime number",num);
return 0; 
         }
   }
printf("%d is a prime number",num);
return 0;
   
}
