#include<stdio.h>
struct mytype{
	int a;
	int *p;
};
int main()
{
	struct mytype m1;
	int b;
	scanf("%d ",&m1.a);
	m1.p=&b;
	b=20;
    printf("%d",*(m1.p));
}
