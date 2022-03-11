#include <iostream>

using namespace std;

class SinifA
{
public:
    SinifA():a(0){};
    friend class SinifB; // friend keyword u ile b sinifi a sinifinin private degerlerini okuma iznine sahip oldu
private:
    int a;
};

class SinifB
{
public:
    void getGosterA(SinifA &sinifAPtr);
private:
    int b;
};

void SinifB::getGosterA(SinifA &sinifAPtr)
{
    cout << "SinifA nin private a degeri: " << sinifAPtr.a << endl;
}

int main()
{
    SinifA NesneA;
    //NesneA.a ya direkt erisilemiyor
    SinifB NesneB;
    NesneB.getGosterA(NesneA);

    return 0;
}