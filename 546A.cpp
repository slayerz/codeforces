//546A - Soldier and Bananas

#include <iostream>

using namespace std;

int main()
{
    long long int k, n, w;

    cin >> k >> n >> w;
    cout << max(0, (w*(w+1)*k)/2-n);

    return 0;
}
