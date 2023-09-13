#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double aDouble = 0.0;

	cout << "Enter in a number: ";

	cin >> aDouble;

	aDouble = aDouble / 3.14159;

	ios::fmtflags oldSettings = cout.flags();
	int oldPrecision = cout.precision();

	cout << "Your number multiplied by 5 is \n" << setw(10) << fixed << setprecision(5) << aDouble << endl; 

	cout.flags(oldSettings);
	cout.precision(oldPrecision);

	cout << aDouble << endl;

	return 0;
}