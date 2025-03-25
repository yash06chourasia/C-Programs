#include<stdio.h>
int main()
{
 int i,j;
 char alp='J';
 for(i=10;i>=1;i--)
 { for(j=1;j<=i;j++)
 {printf("%c",alp);
 }
 printf("\n");
 alp--;}
 return 0;
}	
