#include <iostream>

using namespace std;

class Temel
{
public:
    void yaz()
    {
        cout << "Temel sinif fonksiyonu" << endl;
    }
};

class Turetilmis : public Temel
{
public:
    void yaz() //Function Overiding
    {
        cout << "Turetilmis sinif fonsksiyonu" << endl;
    }
};

int main()
{
    Turetilmis t1;
    Temel* ptr = &t1;
    ptr->yaz(); // temel siniftan yaz fonksiyonunu cagirdigimiz icin temel sinifin yaz fonksiyonu cagirildi

    return 0;
}