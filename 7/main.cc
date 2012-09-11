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

	int checkforprime = 3;
	while (primeholder.size() < 10001) {
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
	}
	/*for (vector<primecounter>::iterator it = primeholder.begin(); it != primeholder.end(); ++it) {
		cout << it->prime << endl;
	}*/
	cout << "Last prime: " << (--primeholder.end())->prime << endl;
	return 0;
}
