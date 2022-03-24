#include <iostream>

using namespace std;
//polymorphism

class poly
{
public:
    poly()
    {
    cout << "poly constructor" << endl;
    }
};

class sinif1 : public poly
{
public:
    sinif1()
    {
        cout << "sinif1 constructor" << endl;
    }
};

class sinif2 : public poly
{
public:
    sinif2()
    {
        cout << "sinif2 constructor" << endl;
    }
};

int main()
{
    sinif1 s1;
    sinif2 s2;

    return 0;
}