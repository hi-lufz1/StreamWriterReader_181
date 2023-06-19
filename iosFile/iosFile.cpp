#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string baris;

        //membuka file dlm mode tulis
        ofstream outfile;
        // menunjuk ke sebuah nama file
        outfile.open("contohfile.txt");

        cout << ">= Menulis file, \'q' untuk keluar" << endl;

        // unlimited loop untuk menulis 
        while (true) {
            cout << "- ";
            // mendapatkan setiap karakter dalam satu baris
            getline(cin, baris);
            //loop akan berhenti jika dimasukan char "q"
            if (baris == "q") break;
            // menulis dan memasukan nilai dari "baris" ke dlm file
            outfile << baris << endl;
        }

        // selesai dalam menulis sekarang tutup filenya
        outfile.close();


        // membuka file dalam mode membaca
        ifstream infile;
        // menunjuk ke sebuah file
        infile.open("contohfile.txt");

        cout << endl << ">= Membuka dan membaca file " << endl;
        // jika file ada maka
        if (infile.is_open())
        {
            // melakukan perulangan setiap baris
            while (getline(infile, baris)) {
                // dan tampilkan disini
                cout << baris << '\n';

            }
            // tutup file tsb setelah selesai
            infile.close();

        }
        //jika file tidak ditemukan maka akan menampilkan ini
        else cout << "Unable to open file";
            return 0;

}
    

