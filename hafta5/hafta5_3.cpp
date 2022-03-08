#include <iostream>

using namespace std;

class Kutu
{
private:
    double derinlik;
    double genislik;
    double yukseklik;
    double hacim;
    double yuzeyAlani;

public:
    //encapsulation hassas olan verilerin kullanicidan saklanmasina denir
    //get ve set metodlari sayesinde data hiding islemini yapabiliriz
    //sadece degisirilmesine izin verdigimiz verilerin kullaniciya acilmasini saglamis olduk
    double getDerinlik() const
    {
        return derinlik;
    }
    void setDerinlik(double derinlik)
    {
        Kutu::derinlik = derinlik;
    }
    double getGenislik() const
    {
        return genislik;
    }
    void setGenislik(double genislik)
    {
        Kutu::genislik = genislik;
    }
    double getYukseklik() const
    {
        return yukseklik;
    }
    void setYukseklik(double yukseklik)
    {
        Kutu::yukseklik = yukseklik;
    }
    double getHacim() const
    {
        return hacim;
    }
    void setHacim(double hacim)
    {
        Kutu::hacim = hacim;
    }
    double getYuzeyAlani() const
    {
        return yuzeyAlani;
    }
    void setYuzeyAlani(double yuzeyAlani)
    {
        Kutu::yuzeyAlani = yuzeyAlani;
    }

    void HacimHesapla()
    {
        hacim = derinlik * genislik * yukseklik;
    }

    void YuzeyAlaniHesapla()
    {
        double on, yan, ust;
        on = genislik * yukseklik;
        yan = derinlik * yukseklik;
        ust = derinlik * genislik;
        yuzeyAlani = 2 * (derinlik + genislik + yukseklik);
    }

    void BilgileriYaz(); //class disinda fonksiyon tanimlamasi yapmak icin prototip tanimlayip
};

void Kutu::BilgileriYaz() //class disinda ise tanimlamayi yapabiliriz
{
    cout << "kutu bilgileri" << endl;
    cout << "Derinlik : " << derinlik << endl;
    cout << "Genislik : " << genislik << endl;
    cout << "Yukseklik : " << yukseklik << endl;
    cout << "Hacim : " << hacim << endl;
    cout << "Yuzey alani : " << yuzeyAlani << endl;
}

int main()
{
    Kutu kutu1;
    kutu1.setDerinlik(25.22);
    kutu1.setGenislik(22.50);
    kutu1.setYukseklik(10.55);
    kutu1.HacimHesapla();
    kutu1.YuzeyAlaniHesapla();
    kutu1.BilgileriYaz();

    return 0;
}