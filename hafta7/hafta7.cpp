#include <iostream>

using namespace std;

class Disarisi
{
private:
    int x;
public:
    int GetX();
    Disarisi();
    class Icerisi // class icinde class nested class ornegi
    {
    private:
        int y;
    public:
        int GetY();
        Icerisi();
    };
};

int Disarisi::GetX()
{
    return x;
}

Disarisi::Disarisi()
{
    x = 5;
}

int Disarisi::Icerisi::GetY()
{
    return y;
}

Disarisi::Icerisi::Icerisi()
{
    y = 10;
}

int main()
{
    Disarisi disTaraf;
    Disarisi::Icerisi icTaraf;

    cout << "Disarisi deger: " << disTaraf.GetX() << endl;
    cout << "Icerisi deger: " << icTaraf.GetY() << endl;

    return 0;
}