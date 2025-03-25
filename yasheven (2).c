#include<stdio.h>
int main()
{
/* c program to c+heck a number is even or odd without modulus operator*/
int a,n;
printf("ENTER A NUMBER");
scanf("%d",&a);
if((n/2)*2==n){printf("%d is even",a);
}
else{printf("%d is odd",a);
}	
	return 0;
}
