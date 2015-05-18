//228A - Is your horseshoe on the other hoof?

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<long long> s;
    long long i, a;

    for(i=0; i<4; i++)
    {
        cin >> a;
        s.push_back(a);
    }

    s.sort();
    s.unique();
    cout << 4-s.size();

    return 0;
}
