#include <iostream>

using namespace std;

int main ()
{
    int a = 20;
    int b = 30;
    int sum1, sum2, sum3;

    // sum/penjumlahan
    sum1 = a + b;
    sum2 = sum1 + b;
    sum3 = sum2 + b;
    cout << "sum1 = " << sum1 << "\n";
    cout << "sum2 = " << sum2 << "\n";
    cout << "sum3 = " << sum3 << endl;
    cin.get();
    return 0;

}