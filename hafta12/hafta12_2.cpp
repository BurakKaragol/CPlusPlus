#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    fstream Dosya;
    fstream Dosya2;
    Dosya.open("deneme.txt", fstream::trunc | fstream::out);
    Dosya2.open("deneme2.txt", fstream::trunc | fstream::in);
    if (Dosya.is_open() && Dosya2.is_open()) {
        cout << "Dosya Açıldı" << endl;
        string satir;

        // Kopyalama
        Dosya.seekg(0, fstream::beg);
        Dosya2.seekg(0, fstream::beg);
        while (Dosya) {
            getline(Dosya, satir);
            if (satir == "-1")
                break;
            Dosya2 << satir << endl;
        }

    } else {
        cout << "Dosyalardan biri açılırken hata oluştu" << endl;
    }


    Dosya.close();
    Dosya2.close();

    return 0;
}