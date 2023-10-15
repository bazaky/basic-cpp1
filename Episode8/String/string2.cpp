#include <iostream>

using namespace std;

int main()
{
    // Acces string

    // To know/find the character in text
    string text1 = "Basith";
    cout << text1 [0] << endl;

    string text2 = "Bazaky";
    cout << text2 [2] << endl;

    // To change the character in text
    string text3 = "Rama";
    text3 [0] = 'G';
    cout << text3 << endl;

    // Specialis character

    string text = "Saya biasa dipanggil Rama\\Basith";
    cout << text << endl;
    string kutip = "Buku berjudul \"Laskar Pelangi\" sangat terkenal";
    cout << kutip << endl;
    string kutip1 = "The book it\'s very good";
    cout << kutip1 << endl;
    
    cin.get();
    return 0;
}
