#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //stack memory
    int dizi_stack[5] = {11, 22, 33, 44, 55};

    for (int i = 0; i < 5; ++i)
    {
        cout << dizi_stack[i] << endl;
    }

    cout << "---------------------------" << endl;

    //heap memory
    int *dizi_heap = (int *) malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; ++i)
    {
        *(dizi_heap + i) = i + 11;
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << dizi_heap[i] << endl;
    }
    free(dizi_heap);

    int *degisken = new int; //new keyword u ile hafizada integer veri tipi icin yer ayirtiyoruz
    //int *degisken = (int *) malloc(sizeof(int)); ayni islemi yapar
    *degisken = 10; //pointerimizi kullanarak hafizadaki yere deger atamasi yapiyoruz
    delete degisken; //ayrilmis olan bellegi bosaltiyoruz

    //malloc yerine new kullanarak class noktasinda constructrlari cagirmak icin new keywordu kullanilabilir

    return 0;
}
