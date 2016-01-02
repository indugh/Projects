#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>


int main() {
	int num_digits = 0;
	cin >> num_digits;
	cout << std::set_precision(num_digits);
	cout << "Here's Pi: " <<endl;
}