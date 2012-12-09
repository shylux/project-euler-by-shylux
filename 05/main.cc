// problem 5

#include <stdio.h>
using namespace std;

#define RANGE 10

// check if all numbers are even
bool allnumberseven(int dividors[RANGE]) {
	int checknumb = dividors[0];
	for (int i = 0; i < RANGE; i++)
		if (dividors[i] != checknumb) return false;
	return true;
}

int main()
{
	int range = RANGE; 
	int dividors[RANGE];

	// init array
	for (int i = 0; i < range; i++) dividors[i] = i+11;

	while (!allnumberseven(dividors)) {
		// increase smallest number
		int pos_smallest = 0;
		for (int i = 0; i < range; i++)
			if (dividors[i] < dividors[pos_smallest]) pos_smallest = i;
		dividors[pos_smallest] += pos_smallest+11;
		//printf("smallest: %d\n", dividors[pos_smallest]);
	}

	/*
	int checknumber = 20;
	while (true) {
		checknumber += 20;
		int i;
		for (i = 20; i > 1; i--) {
			if (checknumber % i != 0) break;
		}
		if (i <= 1) break;
	//	printf("check numb: %d\n", checknumber);
	}
	*/


	
	printf("result: %d\n", dividors[1]);
	return 0;
}
