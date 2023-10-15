#include <iostream>

using namespace std;

int main ()

{
	int x = 4;
	int y = 2;

	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6, hasil7, hasil8, hasil9;

	//operator logika not, and, or

	//not

	hasil1= !(x == 4);

	cout << hasil1 << endl;

	// and : kedua nilai benar untuk menghasilkan true

	cout << "untuk and \n";

	hasil2 = (x == 4) and (y == 2); // true and true
	cout << hasil2 << endl;

	hasil3 = (x == 4) and (y < 2); // true and false
	cout << hasil3 << endl;

	hasil4 = (x < 4 ) && (y == 2); // false and true
	cout << hasil4 << endl;

	hasil5 = (x > 4) && (y < 2); // false and false
	cout << hasil5 << endl;

	// or : salah satu nilai benar untuk menghasilkan true

	cout << "untuk or \n";

	hasil6 = (x == 4) or (y == 2); // true and true
	cout << hasil6 << endl;

	hasil7 = (x == 4) or (y > 2); // true and false
	cout << hasil7 << endl;

	hasil8 = (x > 4) || (y == 2); // false and true
	cout << hasil8 << endl;

	hasil9 = (x > 4) || (y < 2); // false and false
	cout << hasil9 << endl;
	

	cin.get();
	return 0;

}
