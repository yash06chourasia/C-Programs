/*sum of all even number from 1 to 100*/
#include<stdio.h>
int main()
{
 int n=100;
 int sum=0;
 int i;
 for(i=2;i<=n;i=i+2)
 { sum=sum+i;
 }
	
 printf("sum of even number upto 100 is %d",sum);
 return 0;
}	

