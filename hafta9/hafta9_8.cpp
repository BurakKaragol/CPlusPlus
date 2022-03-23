#include <iostream>

using namespace std;

class Temel
{
public:
    //virtual keywordu fonksiyonlari calisma zamaninda birbirine baglamamiza olanak sagliyor.
    virtual void yaz() // sanal fonksiyonlar temel sinifta tanimlandiktan sonra turetilen sinifta yeniden tanimlanabilir
    {
        cout << "Temel sinif fonksiyonu" << endl;
    }
};

class Turetilmis : public Temel
{
public:
    void yaz()
    {
        cout << "Turetilmis sinif fonsksiyonu" << endl;
    }
};

int main()
{
    Turetilmis t1;
    Temel* ptr = &t1;
    ptr->yaz();

    return 0;
}