#include <iostream>

using namespace std;

class Memeli
{
public:
    Memeli()
    {
        cout << "Bu bir memelidir" << endl;
    }

    void Ucur()
    {
        cout << "memeli cik cik" << endl;
    }
};

class Yarasa : public Memeli
{
public:
    Yarasa()
    {
        //override yapip yine de base siniftan kullanmak icin
        Memeli::Ucur();
        cout << "Bu bir yarasadir" << endl;
    }

    void Ucur()
    {
        cout << "yarasalar memeli hayvanlar olup cik cik yaparlar" << endl;
    }
};

int main()
{
    Yarasa yarasa;
    yarasa.Ucur(); // fonksiyonu override ettigimiz icin son sinifimizin icerisinde tanimladigimiz fonksiyon calisir
    yarasa.Memeli::Ucur(); // kodu ile base classtaki fonksiyona da ulasabiliriz

    return 0;
}
