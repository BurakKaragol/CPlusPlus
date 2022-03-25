#include <iostream>

using namespace std;
//class kullanarak dizinin elemanlarini ters cevir
template<class K>
class Dizi
{
private:
    int arraySize;
    K array[];
public:
    Dizi(K dizi[], int diziBoyutu):arraySize(5)
    {
        arraySize = diziBoyutu;
        for (int i = 0; i < arraySize; ++i)
        {
            array[i] = dizi[i];
        }
    }
    friend void operator~(const Dizi<K> dizi, const int size)
    {

    }
    void goster()
    {
        cout << endl;
        for (int i = 0; i < arraySize; ++i)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

};

template<typename T, typename U>

const T diziYazTers(const T &Dizi, int elemanSayisi)
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

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    Dizi<int>d1(a);
    d1.goster();




//    int a[5]={1,2,3,4,5};
//    int *aPtr;
//    int *arPtr;
//    aPtr = a;
//
//    cout << "dizinin ilk hali: " << endl;
//    for (int i = 0; i < 5; ++i)
//    {
//        cout << a[i] << " ";
//    }
//    arPtr = diziYazTers<int*, int>(aPtr, 5);
//    cout << "\ndizinin ters cevrilmis hali: " << endl;
//    for (int i = 0; i < 5; ++i)
//    {
//        cout << *(arPtr + i) << " ";
//    }
//
//    cout << "\n--------------------------------" << endl;
//
//    char c[5]={'a','b','c','d','e'};
//    char *cPtr;
//    char *crPtr;
//
//    cout << "dizinin ilk hali: " << endl;
//    cPtr = c;for (int i = 0; i < 5; ++i)
//    {
//        cout << c[i] << " ";
//    }
//    crPtr = diziYazTers<char*, char>(cPtr, 5);
//    cout << "\ndizinin ters cevrilmis hali: " << endl;
//    for (int i = 0; i < 5; ++i)
//    {
//        cout << *(crPtr + i) << " ";
//    }

    return 0;
}