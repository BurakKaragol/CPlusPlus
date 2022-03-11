#include <iostream>

using namespace std;

class Kare
{
public:
    Kare(int a);
    friend class Dikdortgen;
private:
    int kenar;
};

Kare::Kare(int a)
{
    kenar = a;
}

class Dikdortgen
{
public:
    void SetKenarlar(int kisa, int uzun);
    int AlanHesapla();
    void Cevir(Kare &kare);
private:
    int kisaKenar;
    int uzunKenar;
};

void Dikdortgen::SetKenarlar(int kisa, int uzun)
{
    kisaKenar = kisa;
    uzunKenar = uzun;
}

int Dikdortgen::AlanHesapla()
{
    return kisaKenar * uzunKenar;
}

void Dikdortgen::Cevir(Kare &kare)
{
    uzunKenar = kare.kenar;
    kisaKenar = kare.kenar;
}

int main()
{
    Kare kare1(15);
    Dikdortgen dikdortgen1;
    dikdortgen1.SetKenarlar(20, 30);
    cout << "dikdortgenin alani : " << dikdortgen1.AlanHesapla() << endl;
    dikdortgen1.Cevir(kare1);
    dikdortgen1.AlanHesapla();
    cout << "karenin private degeri dikdortgene alinarak hesaplanan alani : " << dikdortgen1.AlanHesapla() << endl;

    return 0;
}