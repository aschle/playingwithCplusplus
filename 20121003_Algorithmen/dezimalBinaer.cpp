#include <cstdio>

// Rechnet eine Dezimalzahl in eine Binärzahl um
int main(int argc, char **argv){

	int zahl = 8; // Dezimalzahl
	int rest = 0;

	while((zahl / 2) != 0){

		rest = zahl % 2;
		zahl = zahl / 2;
	  printf("%d", rest);
	}

		rest = zahl % 2;
		zahl = zahl / 2;
	  printf("%d\n", rest);
}