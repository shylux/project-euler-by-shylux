// problem 6

#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	unsigned long long sumofsquare = 0;
	unsigned long long squareofsum = 0;
	
	for (int i = 1; i <= 100; i++) 
		sumofsquare += pow(i, 2);

	for (int y = 1; y <= 100; y++) squareofsum += y;
	squareofsum = pow(squareofsum, 2);

	printf("square: %llu, sum: %llu, difference: %llu\n", squareofsum, sumofsquare, squareofsum-sumofsquare);
	return 0;
}
