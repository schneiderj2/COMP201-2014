#include <iostream>

#include <fstream>

#include <cstring>

#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	ifstream inf;
	ofstream outf;
	int input, sum = 0;
	inf.open(argv[1]);
	if(inf.fail()) {
		cout << "Input file failed to open" << endl;
		return 1;
	}
	outf.open("output.txt");
	if(outf.fail()) {
		cout << "The output file failed to open" << endl;
		return 1;
	}
	while(inf >> input) {
		sum += input;
		outf << input << "\t" << input * input << "\t" << sum << endl;
	}
	inf.close();
	outf.close();
	return 0;
}