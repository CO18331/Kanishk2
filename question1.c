#include <stdio.h>
/*Three numbers are input through the keyboard and checking whether the inputs are different or not*/
int main ()
{
int a,b,c;
printf("\n Give me three numbers which may or may not be different. If all are different I will give 0 as output and if any 2 or 3 are same I will give 1 as output \n");
scanf ("%d %d %d",&a,&b,&c);
if (a!=b!=c)
printf ("\n 1 \n");
else
printf ("\n 0 \n");
return 0;
}
