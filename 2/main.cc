// problem 2

#include <iostream>
using namespace std;

int main()
{
	unsigned int last = 1, present = 2, newcalc;
	unsigned long int sum = 2;

	while (true) {
		newcalc = present + last;
		if (newcalc >= 4000000) break;
		if (newcalc % 2 == 0) sum += newcalc;
		last = present;
		present = newcalc;
	}
	
	cout << "Sum is: " << sum << endl;
	return 0;
}
