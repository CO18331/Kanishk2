#include <stdio.h>
/*Checking whether a number a number is a multiple of the other or not*/
int main()
{
int m,n;
printf ("\n Give me two numbers, m and n, and I will tell you if the first one is the multiple of the other or not \n");
scanf ("%d %d",&m,&n);
if (m%n==0)
printf ("m is a multiple of n and m/n is %d \n",m/n);
else
printf ("0");
return 0;
}
