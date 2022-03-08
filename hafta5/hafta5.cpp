#include <iostream>

using namespace std;

int integer = 5; // global

int main()
{
    if (false)
    {
        //global degiskenleri belirtmek icin :: kullanilabilir
        int integer = 10;
        cout << "global : " << ::integer << endl;
        cout << "non global : " << integer << endl;
    }

    if (true)
    {
        //const sozcugu icin
        //char *const ptr => constant pointer adres degistirilemez
        //const char *ptr => constant char pointer adres degisirilebilir deger degistirilemez
        char krk = 'a';
        char *const ptr1 = &krk; //adres degistirilemez
        const char *ptr2 = &krk; //deger degistirilemez
    }

    return 0;
}