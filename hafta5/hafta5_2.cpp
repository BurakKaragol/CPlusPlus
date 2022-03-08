#include <iostream>

using namespace std;

class Tarih
{
private:
    int gun;
    int ay;
    int yil;
public:
    int Gun() {return gun;}

    int Ay() {return ay;}

    int Yil() {return yil;}

    bool Ayarla(int g, int a, int y); // bu sekilde tanimlamayi class disarisinda yapabiliriz
};

bool Tarih::Ayarla(int g, int a, int y)
{
    if (g >= 0 || g <= 31)
    {
        gun = g;
    }
    else
    {
        return false;
    }

    if (a >= 0 || a <= 12)
    {
        ay = a;
    }
    else
    {
        return false;
    }

    if (y >= 0 || y <= 9999)
    {
        yil = y;
    }
    else
    {
        return false;
    }
    return true;
}

int main()
{
    Tarih bayram; //tek bir tarih tutuyor
    Tarih tatiller[5]; //icinde 5 farkli tatil verisi tutuyor
    Tarih *birGun; //tarih degiskeninin adresini tutan bir pointer

    birGun = &bayram; //bayram Tarih sinifindan uretilmis bir nesne

    bayram.Ayarla(29, 10, 2021);

    cout << "Gun = " << bayram.Gun() << endl;
    cout << "Ay = " << bayram.Ay() << endl;
    cout << "Yil = " << bayram.Yil() << endl;

    cout << "-------------------------------" << endl;
    
    tatiller[0].Ayarla(01, 01, 2021);
    cout << "Tatil : " << endl;
    cout << "Gun = " << tatiller[0].Gun() << endl;
    cout << "Ay = " << tatiller[0].Ay() << endl;
    cout << "Yil = " << tatiller[0].Yil() << endl;

    cout << "-------------------------------" << endl;

    birGun->Ayarla(23, 04, 2021);
    cout << "Pointer ile : " << endl;
    cout << "Gun = " << birGun->Gun() << endl;
    cout << "Ay = " << birGun->Ay() << endl;
    cout << "Yil = " << birGun->Yil() << endl;

    cout << "-------------------------------" << endl;

    cout << "Gun = " << bayram.Gun() << endl;
    cout << "Ay = " << bayram.Ay() << endl;
    cout << "Yil = " << bayram.Yil() << endl;

    return 0;
}