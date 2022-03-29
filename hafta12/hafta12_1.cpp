#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream dosya;
    string dosyaKonumu = "hafta12_1.txt";
    string satir;

    dosya.open(dosyaKonumu, fstream::trunc | fstream::out |fstream::in);

    while (dosya)
    {
        getline(cin, satir);
        if (satir == "-Q")
        {
            break;
        }
        dosya << satir << endl;
    }

    dosya.seekg(0/*karakter*/, fstream::beg); // text icerisindeki cursorun pozisyonunu 0. karaktere ayarlar
    //beg = baslangic
    //cur = suan oldugumuz nokta
    //end = son

    while (dosya)
    {
        getline(dosya, satir);
        if (satir == "-1")
        {
            break;
        }
        cout << satir << endl;
    }

    dosya.close();

    return 0;
}