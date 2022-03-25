#include <iostream>

using namespace std;
template<class deger>
class Toplama
{
private:
    deger a, b; //class icerisinde template kullanimi
public:
    Toplama(deger x, deger y)
    {
        a = x;
        b = y;
    }
    void goster()
    {
        cout << a << " + " << b << " = " << Topla() << endl;
    }
    deger Topla()
    {
        return a + b;
    }
};

int main()
{
    Toplama<int>t1(3, 5);
    t1.goster();
    Toplama<float>t2(4.6, 9.2);
    t2.goster();
    Toplama<char>t3('A', '8'); //ASCII degerleri toplaniyor
    t3.goster();

    return 0;
}