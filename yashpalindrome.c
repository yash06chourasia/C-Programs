/*palindrome number*/
#include<stdio.h>
int main()
{
	int num;
	int originalnum;
	int remainder;
	int reversednum=0;
	printf("enter a number : ");
	scanf("%d",&num);
	originalnum=num;
	while(num>0)
	{
		remainder =num%10;
		reversednum=reversednum*10+remainder;
		num=num/10;
	}
	if(originalnum==reversednum)
	{ printf("\n%d is palindrome", originalnum);
	}
	else{
		printf("\n%d is not a palindrome", originalnum
		);
	}
	return 0;
}
