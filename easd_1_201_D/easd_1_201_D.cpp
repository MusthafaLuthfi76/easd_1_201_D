//1. Ilmu komputer adalah bidang studi yang berhubungan dengan pemecahan berbagai masalah dengan menggunakan komputer. 
//    Untuk mengatasi masalah yang diberikan dengan menggunakan komputer, kita perlu merancang algoritma untuk itu. algoritma memungkinkan kita 
//    untuk merancang proses yang sistematis dan efektif untuk menyelesaikan masalah.

//2. Data struktur diklasifikasikan jadi 2 : Static, & Dynamic

//3. Kecepatan mesin, Compiler, Operating System, Bahasa Pemrograman, Ukuran dari Output

//4. Insertion Sort, Karena waktu terbaiknya O(n) kalau sudah hampir urut. Dan algoritma ini sederhana dan mudah diimplementasikan

//5. Quadratic : Bubble Sort, Insertion Sort, Selection Sort
//   LogLinear : Merge Sort, Quick Sort

//6. Program Selection Sort

#include <iostream>
using namespace std;

int luthfi[21];             //Deklarasi array luthfi dengan ukuran 20
int n;                      //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input()                //Procedure untuk input
{
    while (true)            //Looping
    {
        cout << "Masukkan banyaknya elemen pada array : ";      //Output ke layar
        cin >> n;                                               //Input dari pengguna
        if (n <= 20)                                            //Jika n kurang dari atau sama dengan 20
            break;                                              //Keluar dari loop
        else
        {                                                       //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";        //Output ke layar 
        }
    }
    cout << endl;                               //Output Baris Kosong
    cout << "====================" << endl;     //Output ke layar
    cout << "Masukkan Elemen Array" << endl;    //Output ke layar
    cout << "====================" << endl;     //Output ke layar

    for (int i = 0; i < n; i++) {			        //Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data Ke-" << (i + 1) << ": ";	    //Output ke layar
        cin >> luthfi[i];					        //Input dari pengguna
    }
}

void selectionsort() {
    for (int ml = 0; ml < n - 1; ml++) {                   //Step 1
        int min_index = ml;                              //Step 2a
        for (int i = ml + 1; i < n; i++)                 //Step 2b
        {
            if (luthfi[i] < luthfi[min_index])          //Step 2c
            {
                min_index = i;                          //Step 2c.i
            }
        }
        if (min_index != ml)                             //Step 3
        {
            int temp = luthfi[ml];
            luthfi[ml] = luthfi[min_index];
            luthfi[min_index] = temp;
        }
    }
}

void display() {                            //Procedure display
    cout << endl;                                           //Output baris kosong
    cout << "====================" << endl;                 //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;    //Output ke layar
    cout << "====================" << endl;                 //Output ke layar
    for (int j = 0; j < n; j++) {               //Looping dengan j dimulai dari 0 hingga n-1
        cout << luthfi[j] << endl;              //Output ke layar
    }
    cout << endl;                           //Output baris kosong
}


int main()
{
    input();
    selectionsort();
    display();
}

