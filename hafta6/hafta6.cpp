#include <iostream>

using namespace std;

class Cizgi{
public:
    void SetUzunluk(double cizgiUzunluk);
    double GetUzunluk(void); // alinan parametrelere void bo birakmak ile ayni
    Cizgi(); //constructor bir nesne olusturulurken otomatik olarak kullanilan ilk fonksiyondur
    ~Cizgi(); //deconstructor bir nesne yok edilirken otomatik olarak kullanilan son fonksiyondur
private:
    double uzunluk;
};

void Cizgi::SetUzunluk(double cizgiUzunluk)
{
    uzunluk = cizgiUzunluk;
}

double Cizgi::GetUzunluk(void)
{
    return uzunluk;
}

Cizgi::Cizgi()
{
    cout << "Yeni nesne olusturuldu." << endl;
    uzunluk = 10; //her nesenenin default degeri bu olacaktir
}

Cizgi::~Cizgi()
{
    cout << "olusturulmus olan nesne yok edildi." << endl;
}

int main()
{
    Cizgi cizgi1;
    cout << "Cizginin olusturulurkenki uzunlugu : " << cizgi1.GetUzunluk() << endl;
    cizgi1.SetUzunluk(54.67);
    cout << "Cizginin girilen ilk uzunlugu : " << cizgi1.GetUzunluk() << endl;

    return 0;
}