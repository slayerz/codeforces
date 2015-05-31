//25A - IQ test

#include <iostream>

using namespace std;

int main()
{
    int n, i, s[100], evenness=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> s[i];

        if(s[i]%2==0)
            evenness++;
    }

    for(i=0; i<n; i++)
    {
        if(evenness>1)
        {
            if(s[i]%2!=0)
                cout << i+1;
        }
        else
        {
            if(s[i]%2==0)
                cout << i+1;
        }
    }

    return 0;
}
