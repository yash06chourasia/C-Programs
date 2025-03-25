#include<stdio.h>
int main()
{ char ch;
printf("ENTER A CHARACTER :");
scanf("%c",&ch);
if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
{if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
{ printf("IT IS A VOWEL");
}
else{printf("IT IS A CONSONANT");
}
}
else{printf("ENTER A VALID CHARACTER");
}
return 0;
}
