//59A - Word

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int i;
    int upper=0, lower=0;

    cin >> s;

    for(i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
            upper++;
        else
            lower++;
    }

    if(lower>=upper)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s;

    return 0;
}
