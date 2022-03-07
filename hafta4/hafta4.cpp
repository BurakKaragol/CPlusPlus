#include <iostream>
#include <math.h>

using namespace std;

enum haftaninGunleri {Pazartesi, Sali, Carsamba, Persembe, Cuma, Cumartesi, Pazar};
enum cinsiyet {kadin, erkek};

int topla (int x, int y); //fonksiyonun prototipi buraya yazilir ve bu sayede problem cozulur
void carpim (int x, int y);
void karakterYaz(char karakter, int tekrar);

#pragma region pointerler //ile alan tanimalamasi yapilabilir
char ch = 'A'; //global variable declaration
int sayi = 123;
float kesir = 12.5f;
#pragma endregion //region acildiginda kapatilmalidir

struct Tarih
{
    int gun;
    int ay;
    int yil;
};
void yazdir(Tarih t);
Tarih StructCtor(int gun, int ay, int yil);

float fsin(float, float);
void ciz(float);

int main()
{
    if (false)
    {
        //enum
        cinsiyet kullanici;
        kullanici = erkek;
    }

    if (false)
    {
        //fonksiyonlar
        cout << topla(2, 5) << endl;
        cout << topla(7, 9) << endl;
        carpim(3, 6);
    }

    if (false)
    {
        //fonksiyon ornek proje
        //kullanicidan bir karakter alin ve bu karakteri pes pese istenilen adette ekrana yazin.
        char alinanKarakter;
        int tekrarSayisi;

        cout << "Bir karakter giriniz : ";
        cin >> alinanKarakter;
        cout << "Tekrar sayisini giriniz : ";
        cin >> tekrarSayisi;
        karakterYaz(alinanKarakter, tekrarSayisi);
    }

    if (false)
    {
        //pointerlar
        //cout << "ch degiskeninin bellek adresi : " << &ch << endl; //degerının yazmasının ozel bı sebebı var arastır
        //link: https://stackoverflow.com/questions/4860788/why-is-address-of-char-data-not-displayed
        cout << "sayi degiskeninin bellek adresi : " << &sayi << endl;
        cout << "kesir degiskeninin bellek adresi : " << &kesir << endl;
    }

    if (false)
    {
        //pointer ve diziler
        int dizi[5] = {10, 20, 30, 40, 50};
        for (int i = 0; i < 5; ++i)
        {
            cout << &dizi[i] << endl;
            cout << " " << *(dizi + i) << endl;
        }
    }

    if (false)
    {
        //struct kullanarak fonksiyon yazma ornek calisma
        Tarih dogumTarihi;
        dogumTarihi = StructCtor(19, 12, 1998);
        yazdir(dogumTarihi);
        //yazdir(StructCtor(19, 12, 1998)); olarak da yazilabilir
    }

    if (true)
    {
        //F(x) = Asin(x) fonksiyonunun simule edilmesi
        float y = 0.0;
//        for (int i = 0; i <= 360; i += 18)
//        {
//            y = fsin(9, i);
//            ciz(y);
//        }

        while (true)
        {
            for (int i = 0; i <= 360; i += 18)
            {
                y = fsin(9, i);
                ciz(y);
            }
        }
    }

    return 0;
}

float fsin(float x, float aci)
{
    aci *= 3.14618 / 180;
    return x * sin(aci);
}

void ciz(float f)
{
    int adet;
    if (f < 0.0f)
    {
        adet = (int) fabs(f);
        adet = 10 - adet; //10 frekansi belirlemek icin kullaniliyor her 10 turda bir cycle donecek
        for (int i = 1; i < adet; ++i) {
            cout << " ";
        }
        for (int j = adet; j <= 10; ++j) {
            cout << "*";
        }
    }
    else
    {
        adet = int(f);
        for (int k = 1; k < 11; ++k)
        {
            cout << " ";
        }
        for (int l = 11; l <= 11 + adet; ++l)
        {
            cout << "*";
        }
    }
    cout << endl;
}

void yazdir(Tarih t)
{
    cout << t.gun << "/" << t.ay << "/" << t.yil;
}

Tarih StructCtor(int gun, int ay, int yil)
{
    Tarih t;
    t.gun = gun;
    t.ay = ay;
    t.yil = yil;
    return t;
}

void StructCtorPtr(Tarih* tarih, int gun, int ay, int yil)
{
    tarih->gun = gun;
    tarih->ay = ay;
    tarih->yil = yil;
}

void karakterYaz(char karakter, int tekrar)
{
    for (int i = 0; i < tekrar; ++i)
    {
        cout << karakter;
    }
}

int topla (int x, int y) //topla fonksiyonunu kodun basina yazmaliyiz veya basta tanimlamaliyiz #goto 7
{
    return x + y;
}

void carpim (int x, int y)
{
    cout << x * y << endl;
}