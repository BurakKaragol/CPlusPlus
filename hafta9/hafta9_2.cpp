#include <iostream>

using namespace std;

class Tasit
{
public:
    Tasit()
    {
        cout << "bu bir tasittir" << endl;
    }
};

class DortTeker
{
public:
    DortTeker()
    {
        cout << "bu bir dort tekerdir" << endl;
    }
};

class Otomobil : public Tasit, public DortTeker // iki ayri siniftan miras aliyor
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
