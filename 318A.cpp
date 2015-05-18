//318A - Even Odds

#include <iostream>

using namespace std;

int main()
{
    long long n, k, i;

    cin >> n >> k;

    if(k<=(n+1)/2)
        cout << 2*k-1;
    else
        cout << 2*(k-(n+1)/2);

    return 0;
}
