#include <iostream>

using namespace std;

int main()
{
    int a[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            cout << "Masukan angka baris ke - " << i + 1 << " Kolom ke - " << j + 1 << ": ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            cout << "angka baris ke - " << i + 1 << " kolom ke - " << j + 1 << ": " << a[i][j];
        }
        cout << endl;
    }
}