/*
 ============================================================================
 Name        : EX2.1c
 Author      : Omar Ayman
 Description : C_Basics Assignment2 Exercies8
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1,num2,sum,multi,divide,sub;
	char operator;
	printf("Enter operator either + or - or * or /");
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch (operator)
	{
	case '+':
	{
		sum=num1+num2;
		printf("%f+%f=%.1f",num1,num2,sum);
	}
	break;
	case '-':
	{
		sub=num1-num2;
		printf("%f-%f=%.1f",num1,num2,sub);
	}
	break;
	case '*':
	{
		multi=num1*num2;
		printf("%f*%f=%.1f",num1,num2,multi);
	}
	break;
	case '/':
	{
		divide=num1/num2;
		printf("%f/%f=%.1f",num1,num2,divide);
	}
	break;
	default:
	{
		printf("you entered wrong operator");
	}
	}

	return 0;
}


