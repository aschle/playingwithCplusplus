#include <iostream>		// cin cout

using std::cout;
using std::cin;
using std::endl;

int main (int argc, char **argv){

	int auswahl;

	cout << "Getränkeautomat:\n"
					" 1 - Cola\n"
					" 2 - Mate\n"
					" 3 - Bier\n"
					" 4 - Wasser\n";

	cin >> auswahl;

	switch(auswahl){
		case 1:
			cout << "Iiiihhh." << endl;
		break;
		case 2:
			cout << "Das hätte ich auch  genommen!" << endl;
		break;
		case 3:
			cout << "Wie alt bist du?" << endl;
		break;
		case 4:
			cout << "Wasser, wie langweilig!" << endl;
		break;
		default:
			cout << "Oh man. Was soll das denn?" << endl;
	}
	return 0;
}