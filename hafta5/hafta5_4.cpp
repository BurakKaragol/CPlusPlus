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
        yuzeyAlani = 2 * (on + yan + ust);
    }

    void BilgileriAl()
    {
        cout << "Genislik degerini girin : " << endl;
        cin >> genislik;
        cout << "Derinlik degerini girin : " << endl;
        cin >> derinlik;
        cout << "Yukseklik degerini girin : " << endl;
        cin >> yukseklik;
    }

    void BilgileriYaz(); //class disinda fonksiyon tanimlamasi yapmak icin prototip tanimlayip..
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

    kutu1.BilgileriAl();

    kutu1.HacimHesapla();
    kutu1.YuzeyAlaniHesapla();

    cout << "kutu bilgileri" << endl;
    cout << "Derinlik : " << kutu1.getDerinlik() << endl;
    cout << "Genislik : " << kutu1.getGenislik() << endl;
    cout << "Yukseklik : " << kutu1.getYukseklik() << endl;
    cout << "Hacim : " << kutu1.getHacim() << endl;
    cout << "Yuzey alani : " << kutu1.getYuzeyAlani() << endl;

    return 0;
}