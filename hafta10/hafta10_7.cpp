#include <iostream>

using namespace std;

class Hayvan
{
public:
    virtual string konusma()
    {
        return "konusamiyor";
    }
};

class Kedi : public Hayvan
{
public:
    string konusma()
    {
        return "miyavliyor";
    }
};

class Kopek : public Hayvan
{
public:
    string konusma()
    {
        return "havliyor";
    }
};

class Kurt : public Hayvan
{
public:
    string konusma()
    {
        return "uluyor";
    }
};

int main()
{
    Kedi kedi1;
    Kopek kopek1;
    Kurt kurt1;
    kedi1.konusma();
    kopek1.konusma();
    kurt1.konusma();

    return 0;
}