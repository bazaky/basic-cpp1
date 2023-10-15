#include <iostream>

using namespace std;

int main()
{
    int nilai[2][3][2] = {
        {{5, 10}, {15, 20}, {25, 30}},
        {{35, 40}, {45, 50}, {55, 60}}
    };

    // Menampilkan nilai dari array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "[" << i << "]" "[" << j << "]" "[" << k << "]" " = " << nilai[i][j][k] << endl;
            }
        }
    }

    return 0;
}
