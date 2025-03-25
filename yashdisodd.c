/*write a c program to display first n odd numbers*/ 
 #include<stdio.h>
int main()
{
	int i;
 int n;
 printf("enter the no. of terms till where you want odd numbers: ");
 scanf("%d",&n);
	for(i=1;i<=2*n;i=i+2) 
	{ printf("%d\n",i);
	}
}
