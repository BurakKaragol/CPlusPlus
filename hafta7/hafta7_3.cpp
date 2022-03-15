#include <iostream>
// haftanın konusu : nesnelere işaret eden pointerlar

using namespace std;

class Ogrenci
{
private:
    int yas;
public:
    Ogrenci():yas(22){}
    void Goster()
    {
        cout << yas << endl;
    }
};

int main()
{
    Ogrenci *ogr1 = new Ogrenci;
    ogr1->Goster();
    delete ogr1;

    return 0;
}
