#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibás elnevezés N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //pontosvessző hiánya, idézőjel helyetti hasnálata : '
    for (int i = 0;)//hiányos feltétel, inkreventálás
    {
        b[i] = i * 2;//rossz képlet használata (i + 1) * 2
    }
    for (int i = 0; i; i++)//hibás feltétel
    {
        std::cout << "Ertek:"//nincs pontosvessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;//kezdőérték hiányzik
    for (int i = 0; i < N_ELEMENTS, i++)//hibás ciklus meghatározás
    {
        atlag += b[i]//pontosvessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
    //nincs delete-->memóriaszivárgás
}
