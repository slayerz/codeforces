//431A - Black Square

#include <iostream>

using namespace std;

int main()
{
    string s;
    int a[4], i, sum=0;

    for(i=0; i<4; i++)
        cin >> a[i];

    cin >> s;

    for(i=0; i<s.size(); i++)
        sum += a[((char)s[i]-'0')-1];

    cout << sum;

    return 0;
}
