#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int len;
    while(scanf("%d", &len) != EOF) // leer hasta fin de archivo
    {
        string inst; cin >> inst; // cadena que contiene las instrucciones
        float current, threshold, cnt = 0;
        bool caida = false; // bool que controla si el tipo se cayo o no. comienza en falso para indicar que no hay caida
        scanf("%f %f", &current, &threshold);

        for(int i = 0; i < len; i++) // este for recorre uno a uno los caracteres de la cadena
        {
            if(inst[i] == 'L') // si es l, el angulo baja
                cnt -= current;
            if(inst[i] == 'R') // si es r el angulo sube
                cnt += current;
            if(abs(cnt) >= threshold)// si current (rl angulo de ahora) fuera igual o mayor a threshold (el limite) el
            {
                caida = true; //tipo se cae y el for se rompe
                break;
            }
        }
        if(!caida)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
