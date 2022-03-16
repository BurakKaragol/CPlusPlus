#include <iostream>

using namespace std;

class Test
{
private:
    int x;
public:
    void SetX(int x)
    {
        this->x = x; // parametrelerin ayriminin yapilabilmesi icin this keywordunu kullanmamiz gerekiyor
    }

    void yaz()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    Test nesne;
    int x = 20;
    nesne.SetX(x);
    nesne.yaz();

    return 0;
}
