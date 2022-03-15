#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int dizi_boyutu = 1;
    cout << "Olusturmak istediginiz dizinin boyutunu girin : ";
    cin >> dizi_boyutu;
    cout << "----------------------------------------" << endl;

    int *dizi_new = new int[dizi_boyutu];
    //int *dizi_heap = (int *) malloc(sizeof(int) * dizi_boyutu); // ile ayni
    for (int i = 0; i < dizi_boyutu; ++i)
    {
        int temp;
        cout << "Dizinin " << i + 1 << " inci elemanini giriniz: ";
        cin >> temp;
        *(dizi_new + i) = temp;
        cout << "----------------------------------------" << endl;
    }

    cout << "Girmis oldugunuz dizi :" << endl;
    for (int i = 0; i < dizi_boyutu; ++i) {
        cout << dizi_new[i] << endl;
    }
    delete[] dizi_new;
    //free(dizi_heap) // seklinde temizlenir

    return 0;
}
