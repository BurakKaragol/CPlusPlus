#include <iostream>

using namespace std;

class Otomobil{
public:
    Otomobil(string model, string marka, int yil);
    Otomobil();
    ~Otomobil();
    string marka;
    string model;
    int yil;
};

Otomobil::Otomobil(string ilkMarka, string ilkModel, int ilkYil)
{
    marka = ilkMarka;
    model = ilkModel;
    yil = ilkYil;
    cout << "Yeni nesne degerler ile birliikte olusturuldu." << endl;
}

Otomobil::Otomobil()
{
    cout << "Yeni nesne olusturuldu." << endl;
}

Otomobil::~Otomobil()
{
    cout << "olusturulmus olan nesne yok edildi." << endl;
}

int main()
{
    Otomobil Otomobil1("model", "marka", 2000);
    Otomobil Otomobil2();

    return 0;
}