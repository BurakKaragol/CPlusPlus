#include <iostream>

using namespace std;

class sayi
{
public:
    int deger;
    sayi() {}
    ~sayi() {}
    sayi(int s1) {deger = s1;}
    sayi operator +(sayi s2)
    {
        return this->deger + s2.deger;
    }
};

int main()
{
    /* basit degiskenler ile calisan operatorler
    int a = 5;
    int b = 3;
    int c = a + b;

    string ad = "Ahmet ";
    string soyad = "Soylu";
    string tamAd = ad + soyad;

    bool f = true;
    bool g = false;
    bool k = f && g;
    */
    sayi sayi1(10);
    sayi sayi2(20);
    sayi sayi3;
    sayi3 = sayi1 + sayi2;

    return 0;
}