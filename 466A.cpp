//466A - Cheap Travel

#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b, x, t1, t2, t3, mini;

    cin >> n >> m >> a >> b;
    n%m!=0 ? x=1 : x=0;

    t1 = n*a;
    t2 = (n/m+x)*b;
    t3 = n/m*b+(n%m*a);

    mini = min(t1, t2);
    mini = min(mini, t3);

    cout << mini <<endl;

    return 0;
}
