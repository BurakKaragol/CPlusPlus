#include <iostream>

namespace Angarali //kendi namespacelerimizi olusturduk
{
    void Ahmet()
    {
        std::cout << "Ben Angarali Ahmet" << std::endl;
    }
}

namespace Gayserili
{
    void Ahmet()
    {
        std::cout << "Ben Gayserili Ahmet" << std::endl;
    }
}

using namespace Angarali;

int main()
{
    Ahmet();
    Gayserili::Ahmet(); // eger using olarak tanimladigimiz disinda bir namespace kullanmak istiyorsak
    // basinda hangi namespace den kullandigimizi belirtmemiz ve scope atarak fonksiyoun kullanmamiz gerek

    return 0;
}