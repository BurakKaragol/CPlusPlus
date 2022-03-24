#include <iostream>

using namespace std;

class Ogrenci
{
private:
    string ad;
    string soyad;
    int puan;
public:
    Ogrenci(){}
    Ogrenci(string isim, string soyisim, int gelenNot)
    {
        ad = isim;
        soyad = soyisim;
        puan = gelenNot;
    }

    void operator ++() // prefix overload
    {
        this->puan += 5;
    }

    void operator ++(int) // postfix overload
    {
        this->puan += 5;
    }
};

int main()
{
    Ogrenci ogrenci("Burak", "Karagol", 90);
    ++ogrenci;
    ogrenci++;

    return 0;
}