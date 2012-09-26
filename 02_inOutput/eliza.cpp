#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main(int argc, char **argv)
{

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

	if (age < 20)
	{
		cout << age << "! You are very young." << endl;
	} else {
		if (age > 30)
		{
			cout << "Wow. " << age << " You are way older than me!" << endl;
		} else {
			cout << age << "! Actually we are about the same age." << endl;
		}
	}

	cout << "How are you today?" << endl;
	getline(cin, mood);
	cout << "Mood: " << mood << endl;
	getline(cin, mood);

	// for (int i = 0; i < 5; i++){
	// 	if (mood == moodspos[i]){
	// 		cout << "Thats great! I am fine too." << endl;
	// 		break;
	// 	}
	// }

	// for (int i = 0; i < 4; i++){
	// 	if (mood == moodsneg[i]){
 // 			cout << "Oh, I am sorry. What happened?" << endl;
	// 	}
	// }

	// cout << "Goodby! See ya next time." << endl;

	return 0;
}