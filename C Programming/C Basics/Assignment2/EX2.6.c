/*
 ============================================================================
 Name        : EX2.1c
 Author      : Omar Ayman
 Description : C_Basics Assignment2 Exercies6
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num,sum=0,i;
	printf("Enter an integer");
	fflush(stdout);
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("Sum=%d",sum);


	return 0;
}
