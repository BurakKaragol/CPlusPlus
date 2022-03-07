#include <iostream>

using namespace std;

struct parca
{
    int model_numarasi;
    int parca_numarasi;
    float fiyat;
};

struct mesafe
{
    float metre;
    int santimetre;
};

struct oda{
    mesafe uzunluk;
    mesafe genislik;
    mesafe alan;
};

int main()
{
    if (false)
    {
        // struct yapisi
        parca parca1 = {1234, 5678, 99.99F}; // = {degerler}; on tanimlama

        parca1.model_numarasi = 1234;
        parca1.parca_numarasi = 5678;
        parca1.fiyat = 99.99F;

        cout << "Model: " << parca1.model_numarasi << endl
             << "Parca: " << parca1.parca_numarasi << endl
             << "Fiyat: " << parca1.fiyat << endl;
    }

    if (false)
    {
        //struct ornek
        mesafe u1, u2, u3 = {0, 0};

        cout << "\n Ilk deger icin metreyi giriniz: ";
        cin >> u1.metre;
        cout << "\n Santimetreyi giriniz: ";
        cin >> u1.santimetre;

        cout << "\n Ikinci deger icin metreyi giriniz: ";
        cin >> u2.metre;
        cout << "\n Santimetreyi giriniz: ";
        cin >> u2.santimetre;

        u3 = {(u1.metre + u2.metre), (u1.santimetre + u2.santimetre)};
        if (u3.santimetre >= 100) {
            u3.santimetre -= 100;
            u3.metre++;
        }

        cout << "Toplam uzunluk: " << u1.metre << "." << u1.santimetre << " metre" << endl;
        cout << "Toplam uzunluk: " << u2.metre << "." << u2.santimetre << " metre" << endl;
        cout << "Toplam uzunluk: " << u3.metre << "." << u3.santimetre << " metre" << endl;
    }

    if (true)
    {
        // nested struct ornek
        oda yatak_odasi;
        yatak_odasi.genislik.metre = 5;
        yatak_odasi.genislik.santimetre = 60;
        yatak_odasi.uzunluk.metre = 3;
        yatak_odasi.uzunluk.santimetre = 80;

        int genislik = yatak_odasi.genislik.metre * 100 + yatak_odasi.genislik.santimetre;
        int uzunluk = yatak_odasi.uzunluk.metre * 100 + yatak_odasi.uzunluk.santimetre;

        yatak_odasi.alan.metre = 0;
        yatak_odasi.alan.santimetre = genislik * uzunluk;

        while (yatak_odasi.alan.santimetre >= 10000)
        {
            yatak_odasi.alan.santimetre -= 10000;
            yatak_odasi.alan.metre++;
        }

        cout << "Toplam alan: " << yatak_odasi.alan.metre << "." << yatak_odasi.alan.santimetre << " metrekare";
    }

    return 0;
}