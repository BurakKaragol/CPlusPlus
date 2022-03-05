#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    if (false)
    {
        // C dilinde var olan degisken tipleri
        int tamsayi;
        float kesirliSayi;
        double kesirliSayi2;
        char karakter;
        const int pi = 3.14;

        //C++ ile yeni gelenler
        bool dogruluk; // 0 - false veya 1 - true degerlerini alabilir
    }

    if (false)
    {
        //setw kullanimi
        long pop1 = 8276482, pop2 = 3498265, pop3 = 122536529;

        cout << setw(8) << "Degiskenler" << endl
             << setw(8) << "Pop1 degiskeni" << setw(12) << pop1 << endl
             << setw(8) << "Pop2 degiskeni" << setw(12) << pop2 << endl
             << setw(8) << "Pop3 degiskeni" << setw(12) << pop3 << endl;
    }

    if (false)
    {
        //bitwise operators
        int a = 5, b = 9;
        //bitwise and
        // a = 5            (00000101)
        // b = 9            (00001001)
        // sonuc = 1        (00000001)

        //bitwise or
        // a = 5            (00000101)
        // b = 9            (00001001)
        // sonuc = 13       (00001101)

        //bitwise ^
        // a = 5            (00000101)
        // b = 9            (00001001)
        // sonuc = 12       (00001100)

        //bitwise ~
        // a = 5            (00000101)
        // sonuc = -6       (11111010)

        //bitwise <<
        // a = 5            (00000101)
        // b = 2
        // sonuc = 20       (00010100)

        //bitwise >>
        // a = 5            (00000101)
        // b = 2
        // sonuc = 1        (00000001)

        cout << "a = " << a << "\t" << "b = " << b << endl
            << "a & b = " << (a & b) << endl
            << "a | b = " << (a | b) << endl
            << "a ^ b = " << (a ^ b) << endl
            << "~a = " << (~a) << endl
            << "a << 2 = " << (a << 2) << endl
            << "a >> 2 = " << (a >> 2) << endl;
    }

    if (false)
    {
        //prefix ve postfix
        int a = 10;
        cout << a << endl; //normal
        cout << ++a << endl; //prefix
        cout << a++ << endl; //postfix
        cout << a << endl;
    }

    if (false)
    {
        //cmath fonksiyonlari
        double sayi, cevap;
        cout << "Lutfen sayiyi girin : ";
        cin >> sayi;
        cevap = sqrt(sayi);
        cout << "Sayinin karekoku : " << cevap << endl;
    }

    if (false)
    {
        //for dongusu
        for (int sayi = 0; sayi < 10; ++sayi) {
            cout << setw(4) << sayi;
            int kup = pow(sayi, 3);
            cout << setw(6) << kup << endl;
        }
    }

    if (false)
    {
        //while do-while donguleri
        int n = 10;
        while (n < 20)
        {
            cout << n << endl;
            n++;
        }

        cout << "------------------------------------" << endl;

        n = 10;

        do {
            cout << n << endl;
            n++;
        } while (n < 20);
    }

    if (true)
    {
        //cumle girdisi sorgulama ve conio.h
        //exit(1) programin herhangi bir noktasinda programdan cikar
        int kr_sayi = 0;
        int ke_sayi = 1;
        char kr = 'a';

        cout << "Bir cumle giriniz : ";
        while(kr != '\r')
        {
            kr = getche();
            if (kr == ' ')
            {
                ke_sayi++;
            }
            else
            {
                kr_sayi++;
            }
        }
        cout << "\n Kelime sayisi = " << ke_sayi << endl;
        cout << "Karakter sayisi = " << kr_sayi << endl;
    }

//    return  EXIT_SUCCESS; // 0 dondurur
//    return  EXIT_FAILURE; // 1 dondurur
    return 0;
}