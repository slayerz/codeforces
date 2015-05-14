#include <iostream>

using namespace std;

int main()
{
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string d, m;
    int i, k;

    cin >> d >> m;

    for(i=0; i<m.size(); i++)
    {
        if(d=="R")
        {
            k = key.find(m[i], 0);
            cout << key[k-1];
        }
        else
        {
            k = key.find(m[i], 0);
            cout << key[k+1];
        }
    }

    return 0;
}
