#include <iostream>		// cin cout

using std::cout;
using std::cin;
using std::endl;

int main (int argc, char **argv){

	// block statement { }

	int mynumber = 1000;

	{
		int mynumber = 10;
	}

	cout << "My Number: " << mynumber << endl;
}