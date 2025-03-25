#include<stdio.h>
int main()
{
	int marks;
	printf("ENTER YOUR MARKS : ");
	scanf("%d",&marks);
	switch(marks)
	{ case(90):printf("grade A");break;
	case(80):printf("grade B");break;
	case(70):printf("grade C");break;
	case(60):printf("grade D");break;
	case(50):printf("FAIL");break;
	default:printf("number not valid");
	}
	return 0;
}
