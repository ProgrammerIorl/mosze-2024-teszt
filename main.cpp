#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS];  // 'NELEMENTS' helyett 'N_ELEMENTS' 

    std::cout << "1-100 ertekek duplazasa" << std::endl;  // Nincs pontosvessző

    for (int i = 0; i < N_ELEMENTS; i++)  // Hiányzik a ciklusfeltétel és az iteráció változtatása
    {
        b[i] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++)  // Rossz feltétel; 'i < N_ELEMENTS' kellene, hogy minden elemre fusson.
    {
        std::cout << "Ertek: " << b[i] << std::endl;  // Csak annyit ír ki hogy Ertek:
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    float atlag = 0;  // Ahhoz hogy átlagot számoljunk eloször az atlagnak 0 értéket kell adni és float jobb lenne
    for (int i = 0; i < N_ELEMENTS; i++)  // Vessző helyett pontosvesszőt kell használni.
    {
        atlag += b[i];  // Nincs pontosvessző
    }
    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;
    // A dinamikusan lefoglalt memóriát törölni kell 
    delete[] b;  // Memória felszabadítás
    return 0;
    std::cout << "Szia Lóri!"<<std::endl;
}
