# playingwithCplusplus

Playing a little bit around with C++, refreshing some C++ syntax.

## gameOfLife

Starting with game of life, as a simple game. Its a simple implementation, having a fixed size (4x4) of the world and using random numbers to fill the inital world with life. Also the edges of the world are stitched together, so its kind of torus. Every step is printed to the terminal.

	$ c++ -o life life.cpp
	$ ./life

Example:

	0 1 1 1 
	0 1 1 0 
	1 1 0 0 
	0 1 1 0 

	0 0 0 1 
	0 0 0 0 
	1 0 0 1 
	0 0 0 0 

	0 0 0 0 
	1 0 0 1 
	0 0 0 0 
	1 0 0 1


## 01_basics

Also introducing some basics, like datatypes, variables and constants.

* bool
* char
* short/int/long
* float/double/long double
* const

## 02_inOutput

Having a go with `cin` and `cout` (`iostream`).

* numberGame: Guessing a number the computer is thinking of.
* eliza: Talking to the computer.