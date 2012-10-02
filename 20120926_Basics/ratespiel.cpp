#include <stdio.h>
#include <cstdio>

// That's an comment.
// Input using scanf()
// Output using printf()
// while-loop
// if-else-statements, also nested if-else

int main(int argc, char **argv){

	// int is an datatype (integer = ganze Zahl -> 0, 50, 23)
	int secretNumber = 75;
	int myNumber = 0;

	printf("Hallo. Rate mein geheime Zahl!\n"); // \n line break

	while(myNumber != secretNumber)	{
		printf("Zahl: \n");
		scanf("%d", &myNumber); // always use & with scanf()

		// Abfrage ob myNumber die secretNumber ist
		if(myNumber == secretNumber){
			printf("Richtig!\n");
		} else {
			
			if(myNumber < secretNumber){
	      printf("Nochmal neue Zahl eingeben \n");
  	    printf("Groesser als %d", myNumber);
			} else{

					printf("Kleinere Zahl eingeben \n");
				}
			}
		}
	return 0;
}