#include <iostream>		// cin cout
#include <cstdlib>		// srand rand
#include <time.h>			// time

using std::cout;
using std::cin;
using std::endl;

int main (int argc, char **argv){

	srand(time(NULL));

	// zwischen 0 und 99
	int secretNumber = rand()%100;

	// this is the number the user is guessing, changing all the time
	int guessNumber = 0;

	// counting the attemps
	int count = 0;
	
	cout << "Guess my secret number! Its betweet 1 and 99." << endl;

	do{
		count++;
		
		cout << "Number: ";
		cin >> guessNumber;

		if(guessNumber < secretNumber){
			cout << "Bigger!" << endl;
		}

		if(guessNumber > secretNumber){
			cout << "Smaller!" << endl;
		}
	} while(secretNumber != guessNumber);

	cout << secretNumber << "! Congratulations. It took you " << count << " attemps to guess the right number!" << endl;
}