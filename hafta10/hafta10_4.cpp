#include <iostream>
#include <iomanip>

using namespace std;
class Zaman
{
private:
    int saat;
    int dakika;

public:
    void gosterZaman();
    Zaman(){
        saat=0;
        dakika=0;
    }
    Zaman(int s, int d){
        saat = s;
        dakika = d;
    }
    Zaman operator++(){
        ++dakika;
        if (dakika>=60){
            ++saat;
            dakika-=60;
        }
        return Zaman(saat, dakika);
    }
    Zaman operator++(int){
        Zaman Z(saat,dakika);
        ++dakika;
        if (dakika>=60){
            ++saat;
            dakika-=60;
        }
        return Z;
    }

    void timerF(int saat)
    {
        Zaman sayac(0, 0);
        for (sayac.dakika = 0; sayac.saat < saat; sayac++) {
            cout << "Sayac = " << setw(2) << setfill('0') << sayac.saat << ":" << setw(2) << setfill('0') << sayac.dakika << endl;
        }
    }

};

void Zaman::gosterZaman() {
    cout << setw(2) << setfill('0')<< saat << " : " << setw(2) << setfill('0') << dakika << endl;
// setw(2) << setfill('0') ifadesi 00:00 daki dijiti gösterebilmek için yazıldı
}

int main() {
    Zaman z1;
    z1.timerF(3);

    return 0;
}