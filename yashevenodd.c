#include<stdio.h>
#include<stdbool.h>
bool iseven(int a)
{
	int i;
	bool e=true;
	for(i=1;i<=a;i++)
	{ e=!e;
	}
	return e;
}

int main()
{
/* c program to c+heck a number is even or odd without modulus operator*/
int a,n;
bool f;
printf("%d\n",f);
printf("ENTER A NUMBER : ");
scanf("%d",&a);
iseven(a)?printf("EVEN"):printf("ODD");	
	return 0;
}
