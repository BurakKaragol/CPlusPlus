#include <iostream>

using namespace std;

class Agirlik
{
private:
    int kilo;
    float gram;
public:
    void SetDeger();

    void GetDeger();

    Agirlik(): kilo(0), gram(0) {};

    Agirlik(float ag)
    {
        kilo = (int) ag;
        gram = 1000 * (ag - kilo);
    }

    Agirlik(int k, float g): kilo(k), gram(g) {};
};

void Agirlik::SetDeger()
{
    cout << "\nkilo giriniz : ";
    cin >> kilo;
    cout << "\ngram giriniz : ";
    cin >> gram;
}

void Agirlik::GetDeger()
{
    cout << "\nAgirlik : " << kilo << " kilo " << (int)gram << " gramdir." << endl;
}

int main()
{
    Agirlik *ap;
//    ap = new Agirlik; // 3 farkli constructor icin 3 farkli atama yapmamiz mumkun hale gelir.
//    ap = new Agirlik(12.046);
    ap = new Agirlik(12,46);
//    ap->SetDeger(); // kullanilarak degerler alinir
    ap->GetDeger();
    delete ap;

    return 0;
}
