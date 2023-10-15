#include <iostream>
#include <string>

using namespace std;

int main ()
{
	// string concatenation

	string firstname = "Ramadhani ";
	string middlename = "Basith ";
	string lastname = "Razaky";
	string fullname = firstname + middlename + lastname;
	cout << fullname << "\n\n";

	string letter1 = "Disini saya akan ";
	string letter2 = "mulai belajar C++";
	string concatenation = letter1.append(letter2);
	cout << concatenation << "\n\n";

	//numbers and string
	string x = "Sekarang kita sedang berada di tahun\n";
	string y = "20";
	string p = "23";
	string z = x + y + p;
	cout << z << "\n\n";

	//string length
	string myname = "Ramadhani Basith Razaky";
	cout << myname.length() << endl;
	cin.get();
	return 0;
}
