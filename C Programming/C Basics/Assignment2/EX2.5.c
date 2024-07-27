/*
 ============================================================================
 Name        : EX2.1c
 Author      : Omar Ayman
 Description : C_Basics Assignment2 Exercies5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char x;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet ",x);



	return 0;
}
