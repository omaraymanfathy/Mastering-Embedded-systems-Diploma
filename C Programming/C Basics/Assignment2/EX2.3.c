/*
 ============================================================================
 Name        : EX2.1c
 Author      : Omar Ayman
 Description : C_Basics Assignment2 Exercies3
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,c;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("Largest number=%.2f",a);
		else
			printf("Largest number=%.2f",c);
	}
	else
	{
		if(b>c)
			printf("Largest number=%.2f",b);
		else
			printf("Largest number=%.2f",c);
	}



	return 0;
}
