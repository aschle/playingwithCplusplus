#include <cstdio>

int main (int argc, char **argv){

	// Eingabe: Dezimalzahl, 123(10)
	// Ausgabe: HEX-Zahl, A7(16)

	// die Zahl die umgerechnet werden soll
	int dezZahl = 123;

	// der Rest, der ist sehr wichtig
	int rest = 0;

	for (int i = 0; i < 8; i++){
		rest = dezZahl % 16;
		if (rest < 10){
			printf("%d", rest);
		} else {

			// 11 = A
			if(rest == 11){
				printf("A");
			}

			// 12 = B
			if(rest == 12){
				printf("B");
			}

			// 13 = C
			if(rest == 13){
				printf("C");
			}

			// 14 = D
			if(rest == 14){
				printf("D");
			}

			// 15 = E
			if(rest == 15){
				printf("F");
			}
		}
		dezZahl = dezZahl / 16;
	}
	printf("\n");
	return 0;
}