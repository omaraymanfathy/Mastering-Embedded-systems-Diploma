/*
 ============================================================================
 Name        : Lap1.c
 Author      : Omar Ayman
 Description : C Basics lecture Lap
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	for(i=0;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
		printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;
}
