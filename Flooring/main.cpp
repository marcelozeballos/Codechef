#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int cases; cin >> cases;

    while(cases--)
    {
        unsigned long long int num, mod, i = 1;
        cin >> num >> mod;
        unsigned long long int numaux, ans = 0;
        numaux = num;
        for(int j = 0; j < numaux; j++)
        {
            ans += ((i*i*i*i)*(num/i));
            i++;
        }

        cout << (unsigned long long int)ans%mod << endl;
    }
}
