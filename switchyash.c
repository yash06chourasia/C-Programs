#include<stdio.h>
int main()
{ char ch,ent;
int a ,b;
 printf("enter two numbers :");
 scanf("%d%d",&a,&b);
  scanf("%c",&ent);
  printf("ENTER THE CHOICE : + FOR ADDITION ,- FOR SUBTRACTION, * FOR MULTIPLICATION, / FOR DIVSION : ");
  scanf("%c",&ch);
 
 switch(ch)
 {
 	case '+':
 		printf("%d",a+b);break;
 	case '-':
 			printf("%d",a-b);break;
 	case '*':
 			printf("%d",a*b);break;
 	case '/':
 			printf("%d",a/b);break;
 	default :
 		printf("enter valid choice");
		 		  
				    }
		 		
				 
				 	  return 0 ;
 
 
}
