#include<stdio.h>
int main()
{
	int a[10],j,i,count=0;
	printf("enter 10 elements of an array \n ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{ for(j=i+1;j<10;j++)
		if(a[i]==a[j])
		{
			count++;
			break;
		}
	}
	printf("\ntotal duplicate elements is %d ",count);
}
