//469A - I Wanna Be the Guy

#include <iostream>
#include <list>

using namespace std;

int main()
{
    int l, t, x, y, i;
    list<int> p;

    cin >> l >> x;

    for(i=0; i<x; i++)
    {
        cin >> t;
        p.push_back(t);
    }

    cin >> y;

    for(i=0; i<y; i++)
    {
        cin >> t;
        p.push_back(t);
    }

    p.sort();
    p.unique();

    if(p.size()==l)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}
