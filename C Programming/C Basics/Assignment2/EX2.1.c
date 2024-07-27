/*
 ============================================================================
 Name        : EX2.1c
 Author      : Omar Ayman
 Description : C_Basics Assignment2 Exercies1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf("Enter an integer you want to check:");
	fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
		printf("%d is even",x);
	else
		printf("%d is odd",x);


	return 0;
}
