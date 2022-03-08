#include <iostream>

using namespace std;

//class tanimlamasi asagidaki gibidir
//gizlilik turu belirtilmeyen degiskenler default olarak private olarak tanimlanacaktir
class Bisiklet
{
private: //sadece bu sinif icerisindeki metodlar erisim saglayabilir
    int hiz = 0;
    int vites = 1;

protected: //bu sinif, bu siniftan turetilmis siniflar, friend classlar veya metodlar araciligiyla ulasilabilir
    bool elektrikli_mi = false;

public: //kod icerisindeki her yerden ulasilabilir ve duzenleme yapilabilir
    void VitesDegistir(int yeniVites)
    {
        vites = yeniVites;
    }

    void Hizlan(int deger)
    {
        hiz += deger;
    }

    void Yavasla(int deger)
    {
        hiz -= deger; //>= hiz ? 0 : hiz - deger;
    }

    void BilgileriYaz()
    {
        cout << "Vites = " << vites << endl;
        cout << "Hiz = " << hiz << endl;
    }
};

int main()
{
    Bisiklet b;
    b.BilgileriYaz();
    b.Hizlan(10);
    b.VitesDegistir(4);
    b.BilgileriYaz();
    b.Yavasla(5);
    b.BilgileriYaz();

    return 0;
}