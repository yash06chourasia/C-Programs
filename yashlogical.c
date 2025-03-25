#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int d;
	d=((a>b)&&(b<c));//AND operator
	printf("THE RESULT OF ((a>b)&&(b<c)) : %d ",d);
	
		d=((a>b)||(b<c));//OR operator
	printf("\nTHE RESULT OF ((a>b)||(b<c)) : %d ",d);
	
	d=(!(a==b));
		printf("\nTHE RESULT OF (!(a==b)) : %d ",d);
		
			return 0;
	
}