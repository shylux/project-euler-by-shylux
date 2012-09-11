// problem 9

#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	for (int a = 1; a < 1000; a++) {
		for (int b = 1; b < 1000; b++) {
			int c = 1000 - a - b;
			if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
				printf("a: %d, b: %d, c: %d\nproduct: %d\n", a, b, c, a*b*c);
				return 0;
			}
		}
	}
	return 0;
}
