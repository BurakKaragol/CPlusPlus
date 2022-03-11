#include <iostream>

using namespace std;

class Cizgi{
public:
    Cizgi(int x1G, int y1G, int x2G, int y2G);
    Cizgi();
    ~Cizgi();
private:
    int x1, x2, y1, y2;
};

Cizgi::Cizgi(int x1G, int y1G, int x2G, int y2G)
{
    x1 = x1G;
    x2 = x2G;
    y1 = y1G;
    y2 = y2G;
    cout << x1 << ", " << y1 << ", "<< x2 << ", " << y2 << " koordinatlarinda bir Cizgi olusturuldu" << endl;
}

Cizgi::Cizgi():x1(0), x2(0), y1(0), y2(0) //seklinde tanimlama yaparak baslangic degerlerini verebiliriz
{
    cout << "0, 0, 0, 0 koordinatlarinda bir Cizgi olusturuldu" << endl;
}

Cizgi::~Cizgi()
{
    cout << x1 << ", " << y1 << ", "<< x2 << ", " << y2 << " koordinatlarindaki Cizgi yok edildi" << endl;
}

int main()
{
    Cizgi cizgi1(0, 0, 6, 8);
    Cizgi cizgi2;
    cizgi2 = cizgi1;

    return 0;
}