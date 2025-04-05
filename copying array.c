#include<stdio.h>
int main()
{
	int a[5],b[5],i;
	printf("enter the element of array a \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	printf("printing the element of array b copied from array a \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
}
