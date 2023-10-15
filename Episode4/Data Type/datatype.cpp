#include <iostream>

using namespace std;

int main ()
{
    // bilangan bulat
    int a = 20; // 32-bit
    unsigned long b = 30; // 64-bit
    short c = 10; // 16-bit

    // bilangan decimal
    float d = 1.9;
    double e = 2.3;

    // character
    char f = 'a'; // character 1-bit

    // boolean
    bool g = true; // true/false

    cout << a << endl;
    cout << sizeof(a) << "byte" << endl;
    cin.get();
    return 0;
}