#include <iostream>
#include <fstream>
#include "Fraction.h"

using namespace std;

/*namespace one {
	int a = 20;
}

namespace two {
	int a = 100;
}
using namespace one;*/

int main() {
	int x = 10;
	int y = 10; 
	Fraction a(5, 14);
	Fraction b(3, 35);
	Fraction c(1, 4);
	Fraction d(1, 4);
	(a / b).getproperfraction();
	(1+a ).toStrig ();
	cout << a;
	//cout << two::a << endl;
	//cout << a << endl;
	ofstream fout("output.txt");
	fout << a << endl;
	Fraction f;
	cin >> f;
	cout << f << endl;
	ifstream fim("input.txt");
	Fraction g;
	fim >> g;
	cout << g << endl;
}