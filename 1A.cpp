//1A - Theatre Square

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, n, m;

    cin >> n >> m >> a;
    cout << (long long)(ceil(n/a) * ceil(m/a));

    return 0;
}
