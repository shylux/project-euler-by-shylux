// problem 3

#include <iostream>
#include <vector>
using namespace std;

struct primecounter {
	int prime;
	int counter;
};

int main()
{
	vector<primecounter> primeholder;
	primecounter init = {2, 2};
	primeholder.push_back(init);	

	int checkforprime = 2;
	time_t lastupdate = time(0);
	while (checkforprime < 2000000) {
		checkforprime++;
		bool isprime = true;
		for (vector<primecounter>::iterator it = primeholder.begin(); it != primeholder.end(); ++it) {
			while (it->counter < checkforprime) it->counter += it->prime;
			if (it->counter == checkforprime) {
				isprime = false;
				break;
			}
		}
		if (isprime) {
			primecounter newprime = {checkforprime, checkforprime};
			primeholder.push_back(newprime);
		}

		// time function to show progress
		if (lastupdate != time(0)) {
			lastupdate = time(0);
			cout << (--primeholder.end())->prime << endl;
		}
	}

	cout << "primes done. start sum calc." << endl;

	unsigned long long sum = 0;
	for (vector<primecounter>::iterator it = primeholder.begin(); it != primeholder.end(); ++it) {
		cout << "prime: " << it->prime << endl;
		sum += it->prime;
	}
	cout << "sum: " << sum << endl;
	return 0;
}
