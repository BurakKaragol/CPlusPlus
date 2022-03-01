#include <iostream>

using namespace std;

int main()
{
    if (false)
    {
        // '<<' or '>>' bitwise operator. can be overloaded on c++
        string name;
        cout << "Adinizi girin: ";
        cin >> name;
        cout << "Hosgeldin " << name << endl;
    }

    if (true)
    {
        //ornek
        int ftemp;
        cout << "Lutfen sicakligi fahrenheit degerinden giriniz : ";
        cin >> ftemp;
        int ctemp = (ftemp - 32) * 5 / 9;
        cout << "Bilinen sicakligin celsius degeri : " << ctemp;
    }

    return 0;
}