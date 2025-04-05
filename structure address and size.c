#include<stdio.h>
struct mytype{
	int a;
	float b;
};
int main()
{
	 struct mytype m1,m2;
	printf("size of m1 = %d \n",sizeof(m1));
	printf("size of m2 = %d \n",sizeof(m2));
	printf("address of m1.a = %d and m1.b =%d  \n",&m1.a,&m1.b);
	printf("address of m2.a = %d and m2.b =%d  \n",&m2.a,&m2.b);
 printf("\nenter for m1\n");
 scanf("%d%f ",&m1.a,&m1.b);
 printf("\nenter for m2\n");
 scanf("%d%f ",&m2.a,&m2.b);
 printf("\n %d  %f",m1.a,m1.b);
 printf("\n %d  %f",m2.a,m2.b);
}
