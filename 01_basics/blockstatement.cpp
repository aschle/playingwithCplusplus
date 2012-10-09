#include <cstdio>

// Was ist ein Block Statement?
int main (int argc, char **argv){
	
	// Diese Variable "mynumber" wurder außerhalb des Blocks deklariert {}.
	int mynumber = 1000;

	// Hier kommt ein Block.
	{
		int mynumber = 10;
	}
	
	// Was wird ausgegeben?
	printf("My Number: %d\n", mynumber);
}
