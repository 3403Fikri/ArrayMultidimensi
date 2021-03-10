#include <iostream>

using namespace std;

//Fungsi memasukan array dua dimensi dinamis
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

//Fungsi membuat silang menggunakan array 2 dimensi
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

//Fungsi penambahan matrik
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

//Fungsi perkalian matrik
void kalimatrik()
{
    //Deklarasi array
    int total[2][2], matrika[2][2], matrikb[2][2];

    //Memasukan nilai secara dinamis ke dalam matrik A
    cout << "Masukan nilai ke matrik A:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Masukan matrik A [" << i << "][" << j << "]: ";

            cin >> matrika[i][j];
        }
    }

    //Memasukan nilai secara dinamis ke dalam matrik B
    cout << "Masukan nilai ke matrik B" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Masukan matrik B [" << i << "][" << j << "]: ";

            cin >> matrika[i][j];
        }
    }
}

int main()
{

    kalimatrik();

    cin.get();
    return 0;
}