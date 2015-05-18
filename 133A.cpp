//133A - HQ9+

#include <iostream>

using namespace std;

int main()
{
    string p;
    int i;
    bool work=false;

    cin >> p;

    for(i=0; i<p.size(); i++)
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
            work = true;

    if(work)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
