#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream dosya;
    string satir;
    string dosyaKonumu = "hafta12.txt";
    dosya.open(dosyaKonumu);

    // yazma
    while (dosya)
    {
        getline(cin, satir);
        if (satir == "bitir")
        {
            break;
        }
        dosya << satir << endl;
    }
    dosya.close();

    // okuma
    ifstream okunacakDosya;
    okunacakDosya.open(dosyaKonumu);

    while (okunacakDosya)
    {
        getline(okunacakDosya, satir);
        cout << satir << endl;
    }

    okunacakDosya.close();

    return 0;
}