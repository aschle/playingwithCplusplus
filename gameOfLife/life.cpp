#include <iostream>
#include <string>
#include <cstdlib>
#include <string.h>
#include <time.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

/* Countin all the living neighbours. Max is 8. We are living in a sphere world, so no edges.
		(i|j) ...is the position of the current cell, within the world
  	world ...that's the world we are living in
  	size  ...the dimention of the world */
int countNeighbours (int i, int j, int world[4][4], int size){

	return 	world[(i-1+size)%size][(j-1+size)%size] +
					world[(i-1+size)%size][j] +
					world[(i-1+size)%size][(j+1+size)%size] +
					world[i][(j-1+size)%size] +
					world[i][(j+1+size)%size] +
					world[(i+1+size)%size][(j-1+size)%size] +
					world[(i+1+size)%size][j] +
					world[(i+1+size)%size][(j+1+size)%size];
}

/* Apply the game of life rules to every single cell in the world. And return the new future world. */
void livingORdying (int world[4][4], int newWorld[4][4], int size){
	
	// iterating over the world line by line
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){

			int spot				= world[i][j];
			int neighbours 	= countNeighbours(i, j, world, size); 

			// is the spot alive?
			if(spot == 1){
				 // ALIVE:
				 // *	 I:	2v3 neighbours	-> survive
				 // *	II:	0v1 neighbours	-> die (loneliness)
				 // *			4v5v6v7v8				-> die (overpopulation)
				 
				 if (neighbours == 0 || neighbours == 1){
				 	// loneliness
				 	newWorld[i][j] = 0;
				 	continue;
				 }

				 if (neighbours == 2 || neighbours == 3){
				 	// survive
				 	newWorld[i][j] = 1;
				 	continue;
				 }

				 if (neighbours >= 4){
				 	// overpopulation
				 	newWorld[i][j] = 0;
				 	continue;
				 }
			}
			else{
				// DEAD:
				// III:	3 neighbours	-> life is created
				 
				 if (neighbours == 3){
				 	// create life
				 	newWorld[i][j] = 1;
				 }
			}
		}
	}
}

void printWorld(int world[4][4], int size){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			cout << world[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

/* Return true if the is some life left on the world. One cell needs to hold a 0, that's it. */
bool worldIsStillAlive(int world[4][4], int size){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (world[i][j] == 1)
				return true;
		}
	}
	return false;
}

int main (int argc, char **argv){

	srand ( time(NULL) );

	// a constant variable
	int const dim = 4;

	// the array at time N representing the world
	int nArray[dim][dim];

	// tha array representing the future wold N+1
	int n1Array[dim][dim];

	// fill the array randomly
	for (int i = 0; i < dim; i++){
		for (int j = 0; j < dim; j++){

			nArray[i][j] 	= rand()%2;
			n1Array[i][j]	= 0;
		}
	}

	 while (worldIsStillAlive(nArray, dim)){
	 	printWorld(nArray, dim);
	 	livingORdying(nArray, n1Array, dim);
	 	memcpy(nArray, n1Array, sizeof(nArray));
	 }

	return 0;
}