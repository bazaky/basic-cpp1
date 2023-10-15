#include <iostream>

using namespace std;

int main()
{
    int nilai[2][3][2];

    // Mengisi array dengan nilai yang sesuai
    nilai[0][0][0] = 5;
    nilai[0][0][1] = 10;
    nilai[0][1][0] = 15;
    nilai[0][1][1] = 20;
    nilai[0][2][0] = 25;
    nilai[0][2][1] = 30;
    nilai[1][0][0] = 35;
    nilai[1][0][1] = 40;
    nilai[1][1][0] = 45;
    nilai[1][1][1] = 50;
    nilai[1][2][0] = 55;
    nilai[1][2][1] = 60;

    // Menampilkan nilai dari array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "nilai[" << i << "][" << j << "][" << k << "] = " << nilai[i][j][k] << endl;
            }
        }
    }

    return 0;
}
