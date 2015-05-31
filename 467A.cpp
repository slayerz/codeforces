//467A - George and Accommodation

#include <iostream>

using namespace std;

int main()
{
    int n, p, q, room=0;

    cin >> n;

    while(n--)
    {
        cin >> p >> q;

        if(p+2<=q)
            room++;
    }

    cout << room;

    return 0;
}
