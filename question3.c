#include <stdio.h>
/*Checking whether three numbers can form a triangle or not*/
int main ()
{
int a,b,c;
printf ("\n Give me three numbers and I will tell you that whether they can form a triangle or not \n");
scanf ("%d %d %d",&a,&b,&c);
if (a+b>c && b+c>a && c+a>b)
printf ("\n 1 \n");
else
printf ("\n 0 \n");
return 0;
}
