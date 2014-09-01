#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int radius;
    scanf("%d", &radius);

    int p1 = radius*2;

    int answer = sqrt((radius-p1)*(radius-p1));
    printf("%d\n", answer+radius);

}
