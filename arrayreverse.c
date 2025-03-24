#include<stdio.h>
int main()
{ int i,n,temp;
int a[10]={100,234,46,86,46,4579,2478,979,56,1000};
int length=sizeof(a)/sizeof(a[0]);
for(i=0;i<10;i++)
{
	printf("%d\t",a[i]);
}
printf("\n");
for(i=0;i<length/2;i++)
{
	temp=a[i];
	a[i]=a[length-i-1];
	a[length-i-1]=temp;
}
printf("\n");
for(i=0;i<10;i++)
{
	printf("%d\t",a[i]);
}
return 0;
}
