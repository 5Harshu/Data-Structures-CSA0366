#include <stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
int n,fact;
printf("Enter a positive integer: ");
scanf("%d", &n);
fact= factorial(n);
printf("Factorial of %d = %d",n, fact) ;
}
int factorial(int n)
{
if (n==1) 
return 1;
else
return n*factorial(n-1); 
}
