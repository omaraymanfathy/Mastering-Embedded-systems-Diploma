/*
 ============================================================================
 Name        : EX1.6.c
 Author      : OmarAyman
 Description : C_Basics Assignmnet1 Exercies6
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a,b,swap;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	swap=a;
	a=b;
	b=swap;
	printf("After swapping, value of a =%f \n After swapping, value of b =%f ",a,b);

	return 0;
}
