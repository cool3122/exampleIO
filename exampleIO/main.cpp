#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double aDouble = 0.0;

	cout << "Enter in a number to multiply by 5: ";

	cin >> aDouble;

	aDouble = aDouble * 5.0;

	ios::fmtflags oldSettings = cout.flags();
	int oldPrecision = cout.precision();

	cout << "Your number multiplied by 5 is \n" << setw(10) << aDouble <<  endl;
	cout << setprecision(4) << aDouble << endl;			 // Use this for total sig figs
	cout << fixed << setprecision(4) << aDouble << endl; // use fixed for decimals

	cout.flags(oldSettings);
	cout.precision(oldPrecision);

	cout << aDouble << endl;

	return 0;
}