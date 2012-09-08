// problem 3

#include <iostream>
using namespace std;

int main()
{
	unsigned long long checknumber = 600851475143ULL;
	long primefactor = 2;
	
	while (checknumber > 1) {
		if (checknumber % primefactor == 0) {
			checknumber /= primefactor;
			cout << primefactor << endl;
		} else {
			primefactor++;
		}
	}

	cout << "highest prime factor is: " << primefactor << endl;
	return 0;
}
