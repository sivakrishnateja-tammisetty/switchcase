/*switch case is used to make choice between  different alternatives for a given value
 */

/*
#include<stdio.h>
int main()
{
	int month;
	printf("Enter any month from (1-12)");
	scanf("%d",&month);
	switch(month)
	{
		case 1:printf("31 days");break;
		case 3:printf("31 days");break;
		case 5:printf("31 days");break;
		case 8:printf("31 days");break;
		case 10:printf("31 days");
			break;
		case 12:printf("31 days");break;
		case 2:printf("28 | 29 Days");break;
		case 4:printf("30 days");break;
		case 6:printf("30 days");break;
		case 9:printf("30 days");break;
		case 11:printf("30 Days");break;
		default:
			printf("You entered invalid month");
			break;
	}
	return 0;
}





#include<stdio.h>
int main()
{
	int month;
	printf("Enter any month from (1-12)");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 8:
		case 10:
		case 12:printf("31 days");break;
		case 2:printf("28 | 29 Days");break;
		case 4:
		case 6:
		case 9:
		case 11:printf("30 Days");break;
		default:
			printf("You entered invalid month");
			break;
	}
	return 0;
}
*/








#include<stdio.h>
int main()
{
	char optr;
	int n1=20,n2=2;
	printf("Enter operator ");
	scanf("%c",&optr);
	switch(optr)
	{
		case '+':printf("Addition of n1 and n2 is %d\n",n1+n2);break;
		case '-':printf("subtraction of n1 and n2 is %d\n",n1-n2);break;
		case '*':printf("Multiplication of n1 and n2 is %d\n",n1*n2);break;
		case '/':printf("Div of n1 and n2 is %d\n",n1/n2);break;
		case '%':printf("Modulus of n1 and n2 is %d\n",n1%n2);break;
		default:
			 printf("You entered invalid operator");
			 break;
	}
	return 0;
}
