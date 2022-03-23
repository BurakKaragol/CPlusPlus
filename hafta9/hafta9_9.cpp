#include <iostream>

using namespace std;

class Memeli
{
private:
    string tur;
public:
    Memeli() : tur("Memeli")
    {
        cout << tur << endl;
    }

    virtual string getTur()
    {
        return tur;
    }
};

class Kopek : public Memeli
{
private:
    string tur;
public:
    Kopek() : tur("Kopek") {}

    string getTur()
    {
        return tur;
    }
};

class Kedi : public Memeli
{
private:
    string tur;
public:
    Kedi() : tur("Kedi") {}

    string getTur()
    {
        return tur;
    }
};

void yaz(Memeli* memeli)
{
    cout << "Memeli : " << memeli->getTur() << endl;
}

int main()
{
    Memeli memeli1;
    Kopek kopek1;
    Kedi kedi1;

    cout << memeli1.getTur() << endl;
    cout << kopek1.getTur() << endl;
    cout << kedi1.getTur() << endl;

    return 0;
}
