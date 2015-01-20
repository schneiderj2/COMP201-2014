#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;
void add(vector<int>& a) {
	int sum = a.back();
	a.pop_back();
	sum += a.back();
	a.pop_back();
	a.push_back(sum);
}
void subtract(vector<int>& a) {
	int difference = a.back();
	a.pop_back();
	difference = a.back() - difference;
	a.pop_back();
	a.push_back(difference);
}
void multiply(vector<int>& a) {
	int product = a.back();
	a.pop_back();
	product *= a.back();
	a.pop_back();
	a.push_back(product);
}
void divide(vector<int>& a) {
	int quotient = a.back();
	a.pop_back();
	quotient = a.back() / quotient;
	a.pop_back();
	a.push_back(quotient);
}

int main(int argc, char* argv[]) {
	vector<int> numbers;
	string input;
	char *end;
	while(cin >> input) {
		if(input == "+") {
			if(numbers.size() < 2) {
				cout << "Insufficient number of values for operand: " << input << " " << endl;
				break;
			}
			add(numbers);
		}
		else if(input == "-") {
			if(numbers.size() < 2) {
				cout << "Insufficient number of values for operand: " << input << " " << endl;
				break;
			}
			subtract(numbers);
		}
		else if(input == "*") {
			if(numbers.size() < 2) {
				cout << "Insufficient number of values for operand: " << input << " " << endl;
				break;
			}
			multiply(numbers);
		}
		else if(input == "/") {
			if(numbers.size() < 2) {
				cout << "Insufficient number of values for operand: " << input << " " << endl;
				break;
			}
			divide(numbers);
		}
		else if(input == ".") {
			if(numbers.size() == 1) {
				cout << numbers.front() << endl;
			}
			else {
				cout << "User has too many input values" << endl;
			}
			break;
		}
		else {
			numbers.push_back(strtol(input.c_str(), &end, 10));
		}
	}
	return 0;
}