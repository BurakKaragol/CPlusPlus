#include <iostream>

using namespace std;

class Demo
{
private:
    int sayi;
    char karakter;
public:
    Demo &SetSayi(int numara) //nesnenin kendisini geri dondurduk
    {
        this->sayi = numara;
        return *this;
    }

    Demo &SetKarakter(char karakter)
    {
        this->karakter = karakter;
        return *this;
    }

    void yaz()
    {
        cout << "sayi = " << sayi << endl;
        cout << "karakter = " << karakter << endl;
    }
};

int main()
{
    Demo nesne;
    int x = 20;
    char a = 'b';
    //dondurulen sey nesnenin kendisi oldugu icin icindeki fonksiyonlara ulasabiliyoruz
    nesne = nesne.SetSayi(x).SetKarakter(a);
    //pes pese bu sekilde istedigimiz kadar kullanabiliriz
    nesne.yaz();

    return 0;
}
