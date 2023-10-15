#include <iostream>

using namespace std;

int main ()
{
	int p = 4;
	int q = 9;

	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

	// komparasi relation expression

	// sebanding ==
	hasil1 = (p == q);
	// tidak sebanding !=
	hasil2 = (p != q);

	// kurang dari
	hasil3 = (p < q);
	// lebih dari
	hasil4 = (p > q);

	// kurang dari sama dengan
	hasil5 = (p <= q);
	// lebih dari sama dengan
	hasil6 = (p >= q);

	cout << hasil1 << endl;
	cout << hasil2 << endl;
	cout << hasil3 << endl;
	cout << hasil4 << endl;
	cout << hasil5 << endl;
	cout << hasil6 << endl;

	cin.get();
	return 0;
}
