#include <stdio.h>
#include <cstdio>

// if-else
// Input and Output
int main(int argc, char **argv){

	// Initialize Numbers always with zero.
	int number = 0;

	printf ("Zahl Gerade oder ungerade\n");
	scanf("%d", &number);
	if(number%2 == 0)
	{
		printf("Zahl gerade\n");
	}
	else
	{
		printf("Zahl ungerade\n");
	}
	return 0;
}