// problem 5

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int numberOfDivisors(int testnumber) {
	double sroot = sqrt(testnumber);
	int counter = 0;
	for (int i = 1; i <= sroot; i++) {
		if (testnumber % i == 0) {
			counter += 2;
		}
	}
	if (sroot * sroot == testnumber) counter--;
	return counter;
}

int main() {
	int triangle = 1;
	int add = 1;
	while (numberOfDivisors(triangle) < 500) {
		add++;
		triangle += add;
	}
	cout << triangle << endl;
}

