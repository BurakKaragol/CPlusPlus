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

class KanatliHayvan
{
public:
    KanatliHayvan()
    {
        cout << "Bu bir kanatli hayvandir" << endl;
    }

    void Ucur()
    {
        cout << "kanatliHayvan cik cik" << endl;
    }
};

class Yarasa : public Memeli, public KanatliHayvan
{
public:
    Yarasa()
    {
        cout << "Bu bir yarasadir" << endl;
    }
};

int main()
{
    Yarasa yarasa;
    yarasa.KanatliHayvan::Ucur(); // miras alinan iki sinifta da ayni isimde fonksiyonlar var ise
    yarasa.Memeli::Ucur(); //hangi siniftaki fonksiyonu kullanacagimizi belirterek cagirabiliriz

    return 0;
}
