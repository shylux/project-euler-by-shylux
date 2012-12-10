// problam 11

#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int data[20][20];
	int x = 0;
	int y = 0;
	string line, number;
	ifstream datafile;
	datafile.open("data.txt");
	if (datafile.is_open()) {
		while (datafile.good()) {
			getline(datafile, line);
			stringstream ss;
			ss << line;
			while( getline(ss, number, ' ') ) {
				//cout << "x: " << x << " y: " << y << endl;
				data[y][x] = atoi(number.c_str());
				x++;
			}
			x = 0;
			y++;
		}
	}

	cout << "hello world" << endl;
	for (y = 0; y < 20; y++) {
		for (x = 0; x < 20; x++) {
			cout << data[y][x] << " ";
		}
		cout << endl;
	}

	int max = 0;
	int test;
	// h / v
	for (y = 0; y < 20; y++) {
		for (x = 0; x < 16; x++) {
			test = data[y][x] * data[y][x+1] * data[y][x+2] * data[y][x+3];
			if (test > max) max = test;
			test = data[x][y] * data[x][y+1] * data[x][y+2] * data[x][y+3];
			if (test > max) max = test;
		}
	}
	// d
	for (y = 0; y < 16; y++) {
		for (x = 0; x < 16; x++) {
			test = data[y][x] * data[y+1][x+1] * data[y+2][x+2] * data[y+3][x+3];
			if (test > max) max = test;
		}
	}
	for (x = 3; x < 20; x++) {
		for (y = 0; y < 16; y++) {
			test = data[y][x] * data[y+1][x-1] * data[y+2][x-2] * data[y+3][x-3];
			if (test > max) max = test;
		}
	}
	cout << max << endl;
}
