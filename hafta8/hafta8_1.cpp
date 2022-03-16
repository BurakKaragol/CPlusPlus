#include <iostream>

using namespace std;

class Kutu
{
private:
    double genislik;
    double derinlik;
    double yukseklik;
public:
    Kutu(): genislik(10), derinlik(10), yukseklik(10) {}; //constructor

    Kutu(double g = 10, double d = 10, double y = 10): genislik(g), derinlik(d), yukseklik(y) {};

    double HacimHesapla();

    bool Karsilastir(Kutu kutu);

    void Display()
    {
        cout << "genislik" << genislik << endl;
        cout << "derinlik" << derinlik << endl;
        cout << "yukseklik" << yukseklik << endl;
    }
};

double Kutu::HacimHesapla()
{
    return genislik * derinlik * yukseklik;
}

bool Kutu::Karsilastir(Kutu kutu)
{
    return this->HacimHesapla() > kutu.HacimHesapla();
}

int main()
{
    Kutu kutu1(10, 20, 30);
    Kutu kutu2(10, 20, 30);

    cout << "kutu 1 : " << endl;
    kutu1.Display();
    cout << "kutu 2 : " << endl;
    kutu2.Display();

    if (kutu2.Karsilastir(kutu1))
        cout << "kutu1 kutu2 den kucuktur" << endl;
    else if (kutu1.Karsilastir(kutu2))
        cout << "kutu1 kutu2 den buyuktur" << endl;
    else
        cout << "kutu1 kutu2 ile esittir" << endl;

    return 0;
}