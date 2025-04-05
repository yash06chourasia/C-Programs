#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5], b[5],sum=0,i;
	printf("enter 5 elements of 1st array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter 5 elements of 2nd array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("sum of two different array is ");
	for(i=0;i<5;i++)
	{  sum=sum+a[i]+b[i];
		
			}
			printf("%d",sum);		}
