#include <iostream>

using namespace std;

class Sekil // inheritance ornegi
{
protected:
    int genislik;
    int yukseklik;
public:
    Sekil(int g = 1, int y = 1);
    void SetGenislik(int g);
    void SetYukseklik(int y);

    int getGenislik() const;
}; //inheritance ile olusturulan diger classlar protected ve public verilere direkt erisebilir

Sekil::Sekil(int g, int y)
{
    cout << "Sekil olusturuldu" << endl;
    genislik = g;
    yukseklik = y;
}

void Sekil::SetGenislik(int g)
{
    genislik = g;
}

void Sekil::SetYukseklik(int y)
{
    yukseklik = y;
}

// public keywordunu kullanmamizin sebebi temel siniftan alt sinifi turetirken temel sinifin genel uyesi turetilmis
// sinifta genel olacak ve tum ozelliklerini alabilecek base sinifa ne seviyede erisimi oldugunu gorebilecegiz
// protected icin temel siniftan alt sinif turetildiginde hem ana sinif hem de genel uyesi hem de korumali uyeleri
// turetilmis sinifta da ayni sekilde korunuyor
// private icin ana siniftan alt sinifa turettigimizde temel sinifin
// referans -> indir.png
// inheritance noktasindaki keywordu default olarak public
// diger keywordler miras alinan verilerin saklanma tipini belirtir
class Dikdortgen : public Sekil //sekil sinifindan miras ozellik alarak baska bir sinif olusturma
{
public:
    Dikdortgen(int g = 2, int y = 3);
    int AlanHesapla();
};

Dikdortgen::Dikdortgen(int g, int y)
{
    cout << "Dikdortgen olusturuldu" << endl;
    genislik = g; // inheritance kullandigimiz icin sekil sinifinin protected degiskenlerine erisebiliyoruz
    yukseklik = y;
}

int Dikdortgen::AlanHesapla()
{
    return genislik * yukseklik;
}

int main()
{
    Sekil s1; // s1 nesnesinde erisebilecegimiz veriler birtek set fonksiyonlari
    Dikdortgen d1; // d1 nesnesinden sekil sinifinin metodlarina da erisebiliyoruz

    return 0;
}
