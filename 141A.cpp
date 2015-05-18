//141A - Amusing Joke

#include <iostream>

using namespace std;

int main()
{
    string a, b, c;
    int i;
    int letter[26]={0};

    cin >> a >> b >> c;

    for(i=0; i<a.size(); i++)
        letter[a[i]-'A']++;

    for(i=0; i<b.size(); i++)
        letter[b[i]-'A']++;

    for(i=0; i<c.size(); i++)
        letter[c[i]-'A']--;

    for(i=0; i<26; i++)
    {
        if(letter[i] != 0)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
