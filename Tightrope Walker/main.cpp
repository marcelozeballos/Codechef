#include <cstdio>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int len;
    while(cin >> len) // leer hasta fin de archivo
    {
        string inst; cin >> inst; // cadena que contiene las instrucciones
        float current, threshold, cnt = 0; // asumo que el tipo comienza con un angulo de 0 grados
        bool caida = false; // bool que controla si el tipo se cayo o no. comienza en falso para indicar que no hay caida
        cin >> current >> threshold;

        for(int i = 0; i < len; i++) // este for recorre uno a uno los caracteres de la cadena
        {
            if(inst[i] == 'L') // si es l, el angulo baja
                cnt -= current;
            if(inst[i] == 'R') // si es r el angulo sube
                cnt += current;
            if(abs(cnt) >= threshold)// si el valor absoluto de cnt (rl angulo de ahora) fuera igual o mayor a threshold (el limite) el
            {
                caida = true; //tipo se cae y el for se rompe
                break;
            }
        }
        if(!caida)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
