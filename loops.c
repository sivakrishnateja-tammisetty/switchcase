/*1
#include<stdio.h>
int main()
{
	int no_of_wheels;
	printf("Enter no of wheels you are expecting :");
	scanf("%d",&no_of_wheels);
	if(no_of_wheels==2)
	{
		printf("Its two-wheeler vehicle\n");
	}
	if(no_of_wheels==3)
	{
		printf("Its an auto or auto-riksha\n");
	}
	return 0;
}
*/











/*2
#include<stdio.h>
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(num<100)
	{
		printf("Number is lessthan 100\n");
		if(num>80)
		{
			printf("Number is greater than 80 \n");
		}
	}
	return 0;
}
*/












/*3
#include<stdio.h>
int main()
{
	char name[20]="Teja";
	int age=24;
	if(age>=18)
	{
		printf("%s your age is %d, so you are eligible for vote",name,age);
	}
	return 0;
}
*/












/*4
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	if(n1 == n2)
	{
		printf("Both numbers are equal");
	}
	else
	{
		printf("Both numbers are not equal");
	}
	return 0;
}
*/













/*5
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	char name[20]="Siva";
	if(age>=18)
	{
		printf("%s your age is %d, so you are eligible for vote",name,age);
	}
	else
	{
		printf("%s your age is %d, so you are not eligible for vote",name,age);
	}
	return 0;
}
*/











/*6
#include<stdio.h>
int main()
{
	int day_no;
	printf("Enter which day number you want:");
	scanf("%d",&day_no);
	switch(day_no)
	{
		case 1:printf("Monday");break;
		case 2:printf("Tuesday");break;
		case 3:printf("Wednesday");break;
		case 4:printf("Thrusday");break;
		case 5:printf("Friday");break;
		case 6:printf("Saturday");break;
		case 7:printf("Sunday");break;
		default:
		       printf("You entered invalid day number.\nPlz try Again........");
	}
	return 0;
}
*/















/*7
#include<stdio.h>
int main()
{
	char optr;
	printf("Enter operator :");
	scanf("%c",&optr);
	int n1,n2;
	printf("Enter two values:");
	scanf("%d%d",&n1,&n2);
	switch(optr)
	{
		case '+':printf("%d + %d =%d\n",n1,n2,n1+n2);
			 break;
	        case '-':printf("%d - %d =%d\n",n1,n2,n1-n2);
			 break;
	        case '*':printf("%d * %d =%d\n",n1,n2,n1*n2);
			 break;
		case '/':printf("%d / %d =%d\n",n1,n2,n1/n2);
			 break;
		case '%':printf("%d %%  %d=%d\n",n1,n2,n1%n2);
			 break;
		default:
			 printf("You entered invalid operator\n");
	}
	return 0;
}
*/








/*8
#include<stdio.h>
int main()
{
	int num,qty,rate,total=0;
	printf("MENU CARD\n1. TEA\n2. COFFEE\n3. LEMON TEA\n");
	printf("Enter your choice which you want from the men card:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("YOU SELECTED TEA\n");
		       printf("Enter quantity\n");
		       scanf("%d",&qty);
		       rate=6;
		       total=qty*6;
		       printf("Total Amount :%d\n",total);
		       break;
	        
		case 2:printf("YOU SELECTED COFFEE\n");
		       printf("Enter quantity\n");
		       scanf("%d",&qty);
		       rate=12;
		       total=qty*12;
		       printf("Total Amount :%d\n",total);
		       break;
              
		case 3:printf("YOU SELECTED LEMON TEA\n");
		       printf("Enter quantity\n");
		       scanf("%d",&qty);
		       rate=20;
		       total=qty*20;
		       printf("Total Amount :%d\n",total);
		       break;
	       default:
		       printf("-------------SORRY UNAVAILABLE-----------------\n");
		       break;
	}
	return 0;
}
*/











/*9
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		
		case 'a':
	        
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':printf("%c is an vowel",ch);break;
		default:
			 printf("%c is not an vowel",ch);
	}
	return 0;
}

*/
















/*10
#include<stdio.h>
int main()
{
	int num;
	printf("Enter which number you want to test:");
	scanf("%d",&num);
	if(num<0)
	{
		printf("%d is Negative number",num);
	}
	else if(num==0)
	{
		printf("%d is equals to Zero",num);
	}
	else
	{
		printf("%d is positive number",num);
	}
	return 0;
}
*/















/*11
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number between 1 to 999:");
	scanf("%d",&num);
	if(num>=1 && num<=9)
	{
		printf("It's single digit number\n");
	}
	else if(num>=10 && num<=99)
	{
		printf("It's two digit number\n");
	}
	else if(num>=101 && num<=999)
	{
		printf("It's three digit number\n");
	}
	else
	{
		printf("You enterd out of the range\n");
	}
	return 0;
}
*/












/*12
#include<stdio.h>
int main()
{
	int year;
	printf("Enter which year you want to check:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d is leap year",year);
	}
	else if(year %100 ==0)
	{
		printf("%d is not an leap year",year);
	}
	else if(year%400==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not leap year",year);
	}
	return 0;
}
*/












/*13
#include<stdio.h>
int main()
{
	float height;
	printf("Enter your height in (centimeters):");
	scanf("%f",&height);
	if(height<150.0)

		printf("You are Dwarf person");
	

		else if(height>=15.0 && height <165.0)
		
			printf("You are in average height");
		
		else if(height>=165.0 && height<=195.0)
		
			printf("You are taller person like tower");
		
		else
		
			printf("Abnormal height");
		return 0;
}

*/










/*14
#include<stdio.h>
int main()
{
	int num,n=1;
	printf("Enter any number:");
	scanf("%d",&num);
TEJA://label name
	
	n=n*num;
	num--;
	if(num>0)
	{
		goto TEJA;
	}
	printf("Factorial of a number is %d\n",n);
	return 0;
}

*/















/*15
#include<stdio.h>
int main()
{
	int start,end;
	printf("Enter start and end position:");
	scanf("%d%d",&start,&end);
siva:
	if(start%2==0)
	{
		printf("%d\t",start);
	}
	start++;
	if(start<=end)
	{
		goto siva;
	}
	return 0;
}
*/







/*16
#include<stdio.h>
int main()
{
	int start=6,end=12;
Msys:
	printf("%d\t",start);
	start++;
	if(start<=end)
	{
		goto Msys;
	}
	return 0;
}
*/












/*17
#include<stdio.h>
int main()
{
	int num=4,sum=0;
start:
	sum+=num;
	num--;
	if(num>=1)
	{
		goto start;
	}
	printf("Sum of the numbers is %d\n",sum);
	return 0;
}
*/








/*18

#include<stdio.h>
int main()
{
	for(int i=1;i<=10;i++)
	{
		if(i==6)
		{
			break;
		}
		printf("%d\t",i);
	}
	return 0;
}
*/






/*19
#include<stdio.h>
int main()
{
	for(int i=0;i<=10;i++)
	{
		if(i==0)
		{
			continue;
		}
		printf("%d\t",i);
	}
	return 0;
}
*/














/*20
#include<stdio.h>
int main()
{
	for(int i=1;i<=10;i++)
	{
		if(i%2 !=0)
		{
			continue;
		}
		printf("%d\t",i);
	}
	return 0;
}
*/








/*
#include<stdio.h>
int main()
{
        int num,qty,rate,total=0;
TEJA:
        printf("MENU CARD\n1. TEA\n2. COFFEE\n3. LEMON TEA\n");
        printf("Enter your choice which you want from the men card:");
        scanf("%d",&num);
        switch(num)
        {
                case 1:printf("YOU SELECTED TEA\n");
                       printf("Enter quantity\n");
                       scanf("%d",&qty);
                       rate=6;
                       total+=(qty*6);
                       printf("Total Amount :%d\n",total);
                       break;
                
                case 2:printf("YOU SELECTED COFFEE\n");
                       printf("Enter quantity\n");
                       scanf("%d",&qty);
                       rate=12;
                       total+=(qty*12);
                       printf("Total Amount :%d\n",total);
                       break;
              
                case 3:printf("YOU SELECTED LEMON TEA\n");
                       printf("Enter quantity\n");
                       scanf("%d",&qty);
                       rate=20;
                       total+=(qty*20);

                       printf("Total Amount :%d\n",total);
                       break;
               default:
                       printf("-------------SORRY UNAVAILABLE-----------------\n");
                       break;
        }
	int i;
	printf("Do you want to continue press 1:");
	scanf("%d",&i);
	if(i==1)
	{
		goto TEJA;
	}
	printf("Total Bill is :%d\n",total);
	printf("Thank you visit Again");
        return 0;
}
*/






















