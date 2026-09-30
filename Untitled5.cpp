#include<stdio.h>
int main()
{int a,b,choise,res;
printf("==== OPERATORS AND EXPRESSIONS====\n");
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("\n----menu----\n");
printf("1.addition\n");
printf("2.subtraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("5.modulus\n");
printf("\n enter your choise:");
scanf("%d",&choise);
switch(choise)
{
	case 1:
		res=a+b;
		printf("result=%d",res);
		break;
	case 2:
		res=a-b;
		printf("result=%d",res);
		break;
	case 3:
		res=a*b;
		printf("result=%d",res);
		break;
	case 4:
	     res=a/b;
	    printf("result=%d",res);
	     break;
	case 5:
		res=a%b;
		printf("result=%d",res);
		break;
	    }
	    return 0;
}