#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;
    cout << "Masukkan nama file : ";
    cin >> NamaFile;


     //membuka file dlm mode tulis
        ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(NamaFile+".txt", ios ::out);

    cout << ">= Menulis file, \'q' untuk keluar" << endl;

    // unlimited loop untuk menulis 
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika dimasukan char "q"
        if (baris == "q") break;
        // menulis dan memasukan nilai dari "baris" ke dlm file
    }

    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
