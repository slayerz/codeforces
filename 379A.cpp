//379A - New Year Candles

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, hour;

    cin >> a >> b;
    hour = (a*b-1)/(b-1);
    cout << hour;

    return 0;
}
