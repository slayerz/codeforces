//61A - Ultra fast mathematician

#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    int i;

    cin >> s1 >> s2;

    for(i=0; i<s1.size(); i++)
        s1[i]==s2[i] ? cout << 0 : cout << 1;

    return 0;
}
