#include <iostream>

using namespace std;

string h="hello";
int k=0;

void check(string s, int i)
{
    int m;

    m = s.find(h[k], i);

    if(m>=0)
    {
        k++;

        if(k<5)
            check(s, m+1);
        if(k==5)
        {
            k = 0;
            cout << "YES";
        }
    }
    else
        cout << "NO";
}

int main()
{
    string s;

    cin >> s;

    if(s.size()>=5)
        check(s, 0);
    else
        cout << "NO";

    return 0;
}
