#include <iostream>

using namespace std;
template<typename T, typename U>

T diziYazTers(T &Dizi, int elemanSayisi)
{
    for (int i = 0; i < elemanSayisi / 2; ++i)
    {
        U tmp;
        tmp = *(Dizi + i);
        *(Dizi + i) = *(Dizi + (elemanSayisi - 1 - i));
        *(Dizi + (elemanSayisi - 1 - i)) = tmp;
    }
    return Dizi;
}

int main() {

    int a[5]={1,2,3,4,5};
    int *aPtr;
    int *arPtr;
    aPtr = a;

    cout << "dizinin ilk hali: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << a[i] << " ";
    }
    arPtr = diziYazTers<int*, int>(aPtr, 5);
    cout << "\ndizinin ters cevrilmis hali: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << *(arPtr + i) << " ";
    }

    cout << "\n--------------------------------" << endl;

    char c[5]={'a','b','c','d','e'};
    char *cPtr;
    char *crPtr;

    cout << "dizinin ilk hali: " << endl;
    cPtr = c;for (int i = 0; i < 5; ++i)
    {
        cout << c[i] << " ";
    }
    crPtr = diziYazTers<char*, char>(cPtr, 5);
    cout << "\ndizinin ters cevrilmis hali: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << *(crPtr + i) << " ";
    }

    return 0;
}