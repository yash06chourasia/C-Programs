	#include<stdio.h>
	int main()
	{ int marks;
	  printf("ENTER YOUR MARKS : ");
	  scanf("%d",&marks);
	  if(marks>=80)
	  { printf("GRADE A");
	  
	  }
	else if((marks>=70)&&(marks<80))
	  { printf("GRADE B");
	  
	  }
	  
	  else if((marks>=60)&&(marks<70))
	  { printf("GRADE C");
	  
	  }
	  else{
	  	printf("GRADE D ");
	  	
		}
		
	}
