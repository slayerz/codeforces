#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string p;
    int i;
    bool work=false, plus=false;

    cin >> p;

    for(i=0; i<p.size(); i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
            work = true;
        else if(p[i]=='+')
            plus = true;
    }

    if(plus && work)
        cout << "YES";
    else if(work)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
