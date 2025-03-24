/*write a c program that calculate power of number */
#include<stdio.h>
int main()
{

int a,i ,n;
int  result=1;
printf("ENTER A BASE NUMBER : ");
scanf("%d",&a);
printf("ENTER A POWER/EXPONENT : ");
scanf("%d",&n);
/*while(n!=0)
{ result =result*a;
n--;
}*/
for(i=n;n!=0;n--)
{ result =result*a;
}
printf("\n ANSWER = %d", result);
	return 0;
}
