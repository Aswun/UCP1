#include <iostream>
using namespace std;

int Aswin[44];
int n;

void input()
{
    while (true) 
    {
        cout << "masukan banyaknya element pada array : " << endl;
        cin >> n;
        if (n <= 44)
            break;
        else 
        {
            cout << "array dapat mempunyai maksimal 44 element" << endl;

        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "masukan element array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) 
    {
        cout << "data ke-" << (i + 1) << "; ";
        cin >> Aswin[i];
    }
}

void SortingSystem()  // Prosedur untuk mengurutkan array
{
    for (int j = 0; j < n - 1; j++)  // Step 1
    {
        int min_index = j;  // Step 2

        for (int i = j + 1; i < n; i++) 
        {
            if (Aswin[i] < Aswin[min_index])  // Step 3 
            {
                min_index = i;
            }
        }

        int temp = Aswin[j];  // Step 4
        Aswin[j] = Aswin[min_index];
        Aswin[min_index] = temp;
    }
}

void display()
{
    cout << endl;
    cout << "============================" << endl;
    cout << "element array telah tersusun" << endl;
    cout << "============================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << Aswin[i]; // output setiap element pada garis baru
        if (i < n - 1)
        {
            cout << "-->";
        }

    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass = " << n - 1 << endl; // menampilkan total
    cout << endl;
    cout << endl;
}

int main() 
{
    input();
    SortingSystem();
    display();
    system("pause");

    return 0;
}

/*
1. Algoritma BubbleSort membandingkan dengan cara menyimpan terlebih dahulu 1 elemen kemudian dibandingkan dengan cara n - 1 dan seterusnya
2. Algoritma ShellSort membandingakan dengan cara dipisahkan terlebih dahulu kedalam beberapa kelompok kemudian dimasukan kembali kedalam array, hal ini dilakukan hingga semua element sudah terurut
3. Dalam algoritma sortir, jika data sudah ada yang berurutan maka algoritma yang dipilih adalah insertionSort karena insertionSort itu membandingkan nya dengan cara kelompokan element yang belum tersortir kemudian dimasukan kedalam array satu per satu dengan dibandingkan kembali dengan kelompok yang sudah tersortir
*/
