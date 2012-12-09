// problem 4

#include <stdio.h>
using namespace std;

int reverse(int number) {
	int lastdig, reversed = 0;
	while (number > 0) {
		lastdig = number % 10;
		reversed = reversed * 10 + lastdig;
		number /= 10;
	}
	return reversed;
}

int main()
{
	int maxpalindrome = 0, pa, pb;
	int max = 999;
	int a = max, b = max;

	while (a > 0 && b > 0) {
		//printf("checking a: %d, b: %d\n", a, b);
		if (a * b == reverse(a * b) && a*b > maxpalindrome) {
			maxpalindrome = a*b;
			pa = a, pb = b;
		}

		if (b <= a) {
			a--;
			b = max;
		} else {
			b--;
		}
	}

	printf("a: %d, b: %d, product: %d\n", pa, pb, maxpalindrome);

	return 0;
}


