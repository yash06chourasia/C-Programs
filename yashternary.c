/*ternary operator*/
#include<stdio.h>
int main()
{
	int age;
	printf("ENTER YOUR AGE : ");
	scanf("%d",&age);
	age>=18?printf("ELIGIBLE TO VOTE"):printf(" NOT ELIGIBLE TO VOTE");
	return 0;
}
