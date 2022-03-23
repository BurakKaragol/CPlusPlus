#include <iostream>

using namespace std;

class SinifA
{
public:
    SinifA(){cout << "A constructor" << endl;};
};

class SinifB
{
private:
    static SinifA a;
public:
    SinifB(){cout << "B constructor" << endl;};
    static SinifA getA(){return a;}
};

SinifA SinifB::a;

// reaching data on first class without reaching the class itself
// instead we are using another class to read the data
int main()
{
    SinifA a = SinifB::getA();
    
    return 0;
}
