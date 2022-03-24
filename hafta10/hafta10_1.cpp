#include <iostream>

using namespace std;

class Kutu
{
    double uzunluk, genislik, yukseklik;
public:
    double getHacim() {return uzunluk * genislik * yukseklik;}
    void setDeger(double uzn, double gns, double yks) {uzunluk = uzn; genislik = gns; yukseklik = yks;}
    Kutu operator +(const Kutu& b)
    {
        Kutu temp;
        temp.uzunluk = this->uzunluk + b.uzunluk;
        temp.genislik = this->genislik + b.genislik;
        temp.yukseklik = this->yukseklik + b.yukseklik;
        return temp;
    }
};

int main()
{
    Kutu k1, k2, k3;
    k1.setDeger(10, 20, 30);
    k2.setDeger(15, 25, 35);
    k3 = k1 + k2;
    cout << k3.getHacim() << endl;

    return 0;
}