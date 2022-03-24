#include <iostream>
#include <iomanip>

using namespace std;

class Zaman
{
private:
    int saat;
    int dakika;
public:
    Zaman(int s, int d)
    {
        if(s >= 24)
        {
            saat = s - 24;
        }
        else
        {
            saat = s;
        }
        if(d >= 60)
        {
            saat++;
            dakika = d - 60;
        }
        else
        {
            dakika = d;
        }
    }

    void operator ++()
    {
        ++dakika;
        if(dakika >= 60)
        {
            saat++;
            dakika -= 60;
        }
    }

    void operator ++(int)
    {
        dakika++;
        if(dakika >= 60)
        {
            saat++;
            dakika -= 60;
        }
    }

    void zamaniGoster()
    {
        cout << setw(2) << setfill('0') << saat << ":" << setw(2) << setfill('0') << dakika << endl;
    }
};

int main()
{
    Zaman zaman(12, 34);
    //setw ve setfill sayesinde ekranda yazarken tek haneli sayilari da cift haneli gibi 0 ile doldurarak yazdik
    zaman++;
    zaman.zamaniGoster();

    return 0;
}