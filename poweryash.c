/*write a c program that calculate power of number */
#include<stdio.h>
#include<math.h>
int main()
{

int a,n;
int result=1;
printf("ENTER A BASE NUMBER : ");
scanf("%d",&a);
printf("ENTER A POWER/EXPONENT : ");
scanf("%d",&n);
result=pow(a,n);
printf("\n ANSWER = %d",result);
	return 0;
}
