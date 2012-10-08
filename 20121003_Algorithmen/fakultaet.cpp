#include <cstdio>

int main (int argc, char **argv){

	int n;

	printf ("Eine positive Zahl eingeben!\n");
	scanf ("%d", &n);

	int f = 1;
	int i = 1;
	while ( i <= n ){
	   f= f * i;
	   i= i + 1;
	}
	printf("Lösung: %d\n", f);
	return 0;
}
