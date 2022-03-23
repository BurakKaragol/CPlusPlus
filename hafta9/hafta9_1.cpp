#include <iostream>

using namespace std;

//inheritance modlari
//indir.png yi incele

class SinifA
{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class SinifB : public SinifA
{
    // x public
    // y protected
    // z erisilemez
    // olarak tanimlanir
};

class SinifC : protected SinifA
{
    // x protected
    // y protected
    // z erisilemez
    // olarak tanimlanir
};

class SinifD : protected SinifA
{
    // x private
    // y private
    // z erisilemez
    // olarak tanimlanir
};

int main()
{

    return 0;
}
