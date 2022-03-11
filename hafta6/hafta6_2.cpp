#include <iostream>

using namespace std;

class Nokta{
public:
    void SetKoordinat(int xG, int yG);
    void GosterKoordinat();
    Nokta(int xG, int yG);
    Nokta();
    ~Nokta();
private:
    int x, y;
};

void Nokta::SetKoordinat(int xG, int yG)
{
    x = xG;
    y = yG;
}

void Nokta::GosterKoordinat()
{
    cout << "noktanin koordinatlari : " << endl;
    cout << "x : " << x << " y : " << y << endl;
}

//Nokta::Nokta(int xG, int yG)
//{
//    x = xG;
//    y = yG;
//    cout << x << ", " << y << " nokktasindaki bir nokta olusturuldu" << endl;
//}

Nokta::Nokta(int xG, int yG)
{
    x = xG;
    y = yG;
    cout << x << ", " << y << " nokktasindaki bir nokta olusturuldu" << endl;
}

Nokta::Nokta():x(0),y(0) //seklinde tanimlama yaparak baslangic degerlerini verebiliriz
{
    cout << "0, 0 noktasinda bir nokta olusturuldu" << endl;
}

Nokta::~Nokta()
{
    cout << x << ", " << y << " noktasindaki nokta yok edildi" << endl;
}

int main()
{
    Nokta nokta1;
    Nokta nokta2(6, 8);
    nokta1.GosterKoordinat();
    nokta2.GosterKoordinat();
    nokta2 = nokta1 //nesneleri birebir kopyalayabiliriz ayni normal degiskenlerde oldugu gibi;
    Nokta cizgi[] = {nokta1, nokta2, {10, 20}}; // dizi icinde nokta olmadan da tanimlama yapabiliyoruz

    return 0;
}