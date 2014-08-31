#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases; cin >> cases;
    while(cases--)
    {
        string str, aux1, aux2, rts; cin >> str;
        int cnt = 0;

        for(int i = 0;i < str.size(); i++)
        {
            aux1 = str.substr(0,i);
            for(int j = aux1.size()-1; j >= 0; j--)
                aux2 += aux1[j];
            if(aux1 != aux2 && aux1.size() > 2)
            {
                str.erase(0,i-1);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
