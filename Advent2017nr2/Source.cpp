#include<iostream>
#include <cstdlib> 
#include <string>
#include "add.h"
#include <fstream>
#include <sstream>

int main() {

	std::ifstream file("abc.txt");
	std::string   line;
	int nr = {};
	int prev = { 0 };

	for (std::string line; std::getline(file, line, '\n'); ) {
		int maxnr = { 0 };
		int minnr = { 100000 };
		std::istringstream iss(line);

		while ( iss >> nr)
		{
			if (nr < minnr) {
				minnr = nr;
			}

			if (nr > maxnr) {
				maxnr = nr;
			}
			else { }
		}
		prev = add(prev, maxnr-minnr);
	}
	std::cout << " TOT " << prev << "\n";

		return EXIT_SUCCESS;
	}