#include <iostream>

using namespace std;

int main ()
{
    int a = 12;
    int b = 3;
    
    int hasil;
    int result;

    // operatornya +, -, *, /, %

    // penjumlahan
    hasil = a + b;
    cout << a << "+" << b << "=" << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << "-" << b << "=" << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << "*" << b << "=" << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << "/" << b << "=" << hasil << endl;

    //modulus
    hasil = a % b;
    cout << hasil << endl;

    /*operator arithmetic +=, -=, *=, /=, %=*/

    result = a += 3;
    cout << result << endl;

    result = a -= 3;
    cout << result << endl;

    result = a *= 3;
    cout << result << endl;

    result = a /= 3;
    cout << result << endl;

    result = a %= 3;
    cout << result << endl;

    
    cin.get();
    return 0;
}