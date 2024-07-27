/*
 ============================================================================
 Name        : EX2.1c
 Author      : Omar Ayman
 Description : C_Basics Assignment2 Exercies7
 ============================================================================

 */
#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,i,product=1;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			product*=i;
		}
		printf("Factorial=%d",product);
	}
	else if(n<0)
		printf("Error!!! Factorial of negative number not exist");
	else
		printf("Factorial of Zero=1");




	return 0;
}

