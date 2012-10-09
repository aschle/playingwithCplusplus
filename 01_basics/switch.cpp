#include <cstdio>

int main (int argc, char **argv){

	int auswahl;

	printf("Getränkeautomat:\n 1 - Cola\n 2 - Mate\n 3 - Bier\n 4 - Wasser\n");

	scanf("%d", &auswahl);

	switch(auswahl){
		case 1:
			printf("Iiiihhh.\n");
		break;
		case 2:
			printf("Das hätte ich auch  genommen!\n");
		break;
		case 3:
			printf("Wie alt bist du?\n");
		break;
		case 4:
			printf("Wasser, wie langweilig!\n");
		break;
		default:
			printf("Oh man. Was soll das denn?\n");
	}
	return 0;
}
