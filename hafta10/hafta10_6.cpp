#include <iostream>

using namespace std;

class Insan
{
public:
    Insan()
    {
        cout << "Insan oldu" << endl;
    }
    virtual string konusma()=0; //abstraction
};

class Turk : public Insan
{
public:
    string konusma()
    {
        return "turkce konusuyor";
    }
};

class Ingiliz : public Insan
{
public:
    string konusma()
    {
        return "ingilizce konusuyor";
    }
};

int main()
{
    Insan beser;
    cout << beser.konusma() << endl;

    Turk turk;
    cout << turk.konusma() << endl;

    Ingiliz ingiliz;
    cout << ingiliz.konusma() << endl;

    return 0;
}