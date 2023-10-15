#include <iostream>

using namespace std;

int main()
{
	int a,b,result;
	char aritmatika;

	cout << "Selamat datang di program kalkulator sederhana \n\n";

	cout << "Input nilai1 : ";
	cin >> a;
	cout << "Pilih operator +, -, *, / : ";
	cin >> aritmatika;
	cout << "Input nilai2 : ";
	cin >> b;

	cout << "\nHasil perhitungan : ";
	cout << a << aritmatika << b;

	if (aritmatika == '+'){
		result = a + b;
	} else if (aritmatika == '-'){
		result = a - b;
	} else if (aritmatika == '/'){
		result = a / b;
	} else if (aritmatika == '*'){
		result = a * b;
	} else {
		cout << "operator anda salah" << endl;
	}
	
	cout << " = " << result << endl;
	cin.get();
	return 0;
}
