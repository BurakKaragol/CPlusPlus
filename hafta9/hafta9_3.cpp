#include <iostream>

using namespace std;

class Tasit // multi level inheritance
{
public:
    Tasit()
    {
        cout << "bu bir tasittir" << endl;
    }
};

class DortTeker : public Tasit
{
public:
    DortTeker()
    {
        cout << "bu bir dort tekerdir" << endl;
    }
};

class Otomobil : public DortTeker
{
public:
    Otomobil()
    {
        cout << "bu bir otomobildir" << endl;
    }
};

int main()
{
    Tasit tekne;
    DortTeker jeep;
    Otomobil sedan;

    return 0;
}
