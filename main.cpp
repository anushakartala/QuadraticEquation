#include <iostream>
using namespace std;
#include <cmath>

int main() {
	double a;
	double b;
	double c;
	double squareRoot;
	double insideSquare;
	double x1;
	double x2;
	double partOne;
	double partTwo;
	double linear;

	cin >> a >> b >> c;
	//cout << a << " " << b << " " << c << endl;


	cout << a << "x^2";

	if (b < 0) {
		cout << " - " << fabs(b) << "x";
	}
	else {
		cout << " + " << b << "x";
	}

	if (c < 0) {
			cout << " - " << fabs(c);
		}
		else {
			cout << " + " << c;
		}

	cout << " = 0" << endl;

	if (a==0 && b==0) {
		cout << "Unable to determine root(s).";
	}

	else if (a == 0) {
    		linear = ((-c) / b);
    		cout << "x = " << linear << endl;
	}
	else {

	insideSquare = ((pow(b, 2)) - (4*a*c));

	if (insideSquare > 0) {

		squareRoot = sqrt((pow(b, 2)) - (4*a*c));
			x1 = ((-b - squareRoot) / (2*a));
			x2 = ((-b + squareRoot) / (2*a));


	cout << "x = " << x1 << endl;
	cout << "x = " << x2 << endl;
	}


	if (insideSquare < 0) {
		insideSquare = fabs(insideSquare);


	partOne = ((-b) / (2*a));
	partTwo = (sqrt(insideSquare) / (2*a));

	if (partTwo < 0) {
		cout << "x = " << partOne << " + " << fabs(partTwo) << "i" << endl;
		cout << "x = " << partOne << " - " << fabs(partTwo) << "i" << endl;
	}

	else {
	cout << "x = " << partOne << " - " << partTwo << "i" << endl;
	cout << "x = " << partOne << " + " << partTwo << "i" << endl;
	}

	}

    if (insideSquare == 0) {
    	partOne = ((-b) / (2*a));
    	cout << "x = " << partOne << endl;
    }
	}

}
