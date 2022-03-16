#include <iostream>

using namespace std;

class Kutu
{
private:
    double genislik;
    double derinlik;
    double yukseklik;

public:
    static int nesneSayisi; //bir statik uye sabit degiskendir degerine class ismi ile ulasilir

    Kutu(): genislik(10), derinlik(10), yukseklik(10) {nesneSayisi++;}; //constructor

    Kutu(double g = 10, double d = 10, double y = 10): genislik(g), derinlik(d), yukseklik(y) {nesneSayisi++;};

    double HacimHesapla();

    bool Karsilastir(Kutu kutu);

    void Display();
};

int Kutu::nesneSayisi = 0; //main icerisinde kullanabilmek icin main disinda yeniden tanimlamamiz gerekiyor

double Kutu::HacimHesapla()
{
    return genislik * derinlik * yukseklik;
}

bool Kutu::Karsilastir(Kutu kutu)
{
    return this->HacimHesapla() > kutu.HacimHesapla();
}

void Kutu::Display()
{
    cout << "Genislik : " << genislik << endl;
    cout << "Derinlik : " << derinlik << endl;
    cout << "Yukseklik : " << yukseklik << endl;
    cout << "Hacim : " << this->HacimHesapla() << endl;
}

int main()
{
    cout << "Toplam nesne sayisi : " << Kutu::nesneSayisi << endl;

    Kutu kutu1(20, 30, 40);
    cout <<"Kutunun boyutlari : " << endl;
    kutu1.Display();

    cout << "Toplam nesne sayisi : " << Kutu::nesneSayisi << endl;

    Kutu kutu2(50, 60, 70);
    Kutu *ptrKutu = &kutu2;
    cout <<"Kutunun boyutlari : " << endl;
    ptrKutu->Display();

    cout << "Toplam nesne sayisi : " << Kutu::nesneSayisi << endl;
    //constructor ile arttirma yaptigimizda en sonunda elimizde nesne sayisi kaliyor


    return 0;
}