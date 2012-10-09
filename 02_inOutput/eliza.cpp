#include <iostream> // CIN und COUT !!!
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

// Verwendung von CIN und COUT (So wie man es in C++ macht!).
// Datentypen, Sting, int und Felder (Arrays)
int main(int argc, char **argv){

	// Felder für "Mood"
	string moodspos[5] = {"fine", "good", "I am fine.", "I feel good.", "ok"};
	string moodsneg[4] = {"bad", "I am bad.", "I feel bad.", "not good"};


	string myname;
	string mood;
	int age;

	cout << "Hello! My name is ELIZA. I am a psychologist. Whats your name?" << endl;
	cin >> myname;
	cout << "Hello " << myname << "! Nice to meet you." << endl;
	cout << "How old are you?" << endl;
	cin >> age;

	// Je nach dem wie alt soll ein anderer Satz ausgegeben werden.
	if (age < 20){
		cout << age << "! You are very young." << endl;
	} else {
		if (age > 30){
			cout << "Wow. " << age << " You are way older than me!" << endl;
		} else {
			cout << age << "! Actually we are about the same age." << endl;
		}
	}

	cout << "How are you today?" << endl;
	getline(cin, mood);
	cout <<  mood << endl;
	
	// mit getline wird eine ganze Zeile eingelesen, insbesondere auch
	// Leerzeichen!
	getline(cin, mood);

	// je nach Stimmung soll ein andere Satz ausgegeben werden:
	// Gute Laune:
	for (int i = 0; i < 5; i++){
		if (mood == moodspos[i]){
			cout << "Thats great! I am fine too." << endl;
			break;
		}
	}

	// Schlechte Laune:
	for (int i = 0; i < 4; i++){
	 	if (mood == moodsneg[i]){
 		cout << "Oh, I am sorry. Hopefully nothing bad happened." << endl;
		}
	}

	cout << "Goodby! See ya next time." << endl;
	return 0;
}
