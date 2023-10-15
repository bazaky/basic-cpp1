#include <iostream>

using namespace std;

int main()
{
    int x = 4;
    int y = 8;
    int hasil;
    //operator assignment : =,+=,-=,*=,/=,%=
    hasil = x += 10;
    cout << hasil << endl;
    hasil = y -= 3;
    cout << hasil << endl;
    hasil = x *= 2;
    cout << hasil << endl;
    hasil = y /= 2;
    cout << hasil << endl;
    hasil = y %= 6;
    cout << hasil << endl;
    cin.get();

    return 0;
}
