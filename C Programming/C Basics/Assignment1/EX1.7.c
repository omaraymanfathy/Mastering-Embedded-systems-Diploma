/*
 ============================================================================
 Name        : EX1.7.c
 Author      : OmarAyman
 Description : C_Basics Assignmnet1 Exercies7
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a,b;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a =%f \nAfter swapping, value of b =%f ",a,b);

	return 0;
}
