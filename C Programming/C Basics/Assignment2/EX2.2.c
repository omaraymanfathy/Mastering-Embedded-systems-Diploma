/*
 ============================================================================
 Name        : EX2.1c
 Author      : Omar Ayman
 Description : C_Basics Assignment2 Exercies2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char x;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&x);
	if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
		printf("%c is a vouel",x);
	else
		printf("%c is a consonant",x);


	return 0;
}
