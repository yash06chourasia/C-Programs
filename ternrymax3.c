#include<stdio.h>
int main()
{
int a ,b,c;
 printf("enter three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 ((a>b)&&(a>c))?printf("%d is greater ",a):((b>a)&&(b>c))?printf("%d is greater ",b):printf("%d is greater ",c);
}
 
