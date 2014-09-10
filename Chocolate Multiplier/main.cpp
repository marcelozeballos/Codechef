#include <iostream>
#include <cstdio>
using namespace std;

int len, inicio, fin;
double vec[10005];

bool fs(double chocolate)
{
    if(chocolate > fin)
        return 0;
    if(chocolate == fin)
        return 1;
    bool salida=false;
    for(int i = 0; i < len; i++){
        if(vec[i]!=1)
        salida=salida||fs(chocolate*vec[i]);
        if(salida)return true;
    }
}

int main()
{
    scanf("%d", &len);
    cin >> inicio >> fin;

    for(int i = 0;i < len; i++)
        scanf("%lf", &vec[i]);

    if (fs(inicio))
        printf("POSSIBLE\n");
    else
        printf("IMPOSSIBLE\n");

    return 0;
}
