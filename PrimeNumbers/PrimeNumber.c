#include<stdio.h>
 
int check_prime(int);
 
int main(void)
{
   int num, result;
  //Enter a number to check if it is prime or not
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&num);
 //Call the function
   result = check_prime(num);
 
   if ( result == 1 )
      printf("%d is prime.\n", num);
   else
      printf("%d is not prime.\n", num);
 
   return 0;
}
 
int check_prime(int number)
{
   int i;
 // Run a loop to check if the number is divisible by any other integer except 1 and itself
   for ( i = 2 ; i <= number - 1 ; i++ )
   { 
      if ( number%i == 0 )
     return 0;
   }
   return 1;
}
 