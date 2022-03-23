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

class Otomobil : public Tasit
{
public:
    Otomobil()
    {
        cout << "bu bir otomobildir" << endl;
    }
};

class Otobus : public Tasit
{
public:
    Otobus()
    {
        cout << "bu bir otobustur" << endl;
    }
};

class BenzinliOtomobil : public Otomobil
{
public:
    BenzinliOtomobil()
    {
        cout << "bu bir benzinli otomobildir" << endl;
    }
};

class DizelOtomobil : public Otomobil
{
public:
    DizelOtomobil()
    {
        cout << "bu bir dizel otomobildir" << endl;
    }
};

int main()
{
    Tasit tekne;
    Otomobil sedan;

    return 0;
}
