#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS];  // 'NELEMENTS' helyett 'N_ELEMENTS' 

    std::cout << '1-100 ertekek duplazasa'  // Nincs pontosvesszõ

        for (int i = 0;)  // Hiányzik a ciklusfeltétel és az iteráció változtatása
        {
            b[i] = i * 2;  
        }

    for (int i = 0; i; i++)  // Rossz feltétel; 'i < N_ELEMENTS' kellene, hogy minden elemre fusson.
    {
        std::cout << "Ertek:"  // Csak annyit ír ki hogy Ertek:
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;  // Ahhoz hogy átlagot számoljunk eloször az atlagnak 0 értéket kell adni és float jobb lenne
    for (int i = 0; i < N_ELEMENTS, i++)  // Vesszõ helyett pontosvesszõt kell használni.
    {
        atlag += b[i] // Nincs pontosvesszõ
    }
    atlag /= N_ELEMENTS;  

    std::cout << "Atlag: " << atlag << std::endl;
    // A dinamikusan lefoglalt memóriát törölni kell 
    return 0; 
}
