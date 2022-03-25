#include <iostream>

using namespace std;
template<typename T>

T Maks(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << Maks(3, 7) << endl;
    cout << Maks<int>(3, 7) << endl; //cagirirken tipini belirtebiliriz bu sekilde
    cout << Maks(3.0, 7.1) << endl;
    cout << Maks<double>(3.0, 7.1) << endl;

    return 0;
}