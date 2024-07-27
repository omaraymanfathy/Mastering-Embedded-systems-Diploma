/*
 ============================================================================
 Name        : EX2.1c
 Author      : Omar Ayman
 Description : C_Basics Assignment2 Exercies4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float num;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%f", &num);
	if (num > 0)
		printf("%.2f is positive", num);
	else if (num < 0)
		printf("%.2f is negative", num);
	else
		printf("You Entered Zero");

	return 0;
}
