#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS];  // 'NELEMENTS' helyett 'N_ELEMENTS' 

    std::cout << '1-100 ertekek duplazasa'  // Nincs pontosvessz�

        for (int i = 0;)  // Hi�nyzik a ciklusfelt�tel �s az iter�ci� v�ltoztat�sa
        {
            b[i] = i * 2;  
        }

    for (int i = 0; i; i++)  // Rossz felt�tel; 'i < N_ELEMENTS' kellene, hogy minden elemre fusson.
    {
        std::cout << "Ertek:"  // Csak annyit �r ki hogy Ertek:
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;  // Ahhoz hogy �tlagot sz�moljunk elosz�r az atlagnak 0 �rt�ket kell adni �s float jobb lenne
    for (int i = 0; i < N_ELEMENTS, i++)  // Vessz� helyett pontosvessz�t kell haszn�lni.
    {
        atlag += b[i] // Nincs pontosvessz�
    }
    atlag /= N_ELEMENTS;  

    std::cout << "Atlag: " << atlag << std::endl;
    // A dinamikusan lefoglalt mem�ri�t t�r�lni kell 
    return 0; 
}
