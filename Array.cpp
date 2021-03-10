#include <iostream>

using namespace std;

void latihanarray()
{
    int a[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukan angka baris ke - " << i + 1 << " Kolom ke - " << j + 1 << ": ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "angka baris ke - " << i + 1 << " kolom ke - " << j + 1 << ": " << a[i][j];
            cout << endl;
        }
        cout << endl;
    }
}

void buatSilang()
{
    cout << "Masukan ordo array: ";
    int banyak;
    cin >> banyak;

    for (int x = 0; x < banyak; x++)
    {
        for (int y = 0; y < banyak; y++)
        {
            if (x == y || y == (banyak - x - 1))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void tambahmatrik()
{
    int matrixa[3][3], matrixb[3][3], total[3][3];

    cout << "masukan angka matrix a" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukan baris ke " << i + 1 << " kolom ke " << j + 1 << ": ";
            cin >> matrixa[i][j];
        }
    }
    cout << endl;
    cout << "masukan angka matrix b" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukan baris ke " << i + 1 << " kolom ke " << j + 1 << ": ";
            cin >> matrixb[i][j];
        }
    }

    cout << endl;

    cout << "Matrix a" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << matrixb[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix B" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << matrixb[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Total : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            total[i][j] = matrixa[i][j] + matrixb[i][j];
            cout << total[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    
    cin.get();
    return 0;
}