//427A - Police Recruits

#include <iostream>

using namespace std;

int main()
{
    int n, e, p=0, c=0;

    cin >> n;

    while(n--)
    {
        cin >> e;

        if(e==-1)
        {
            if(p==0)
                c++;
            else
                p--;
        }
        else
            p += e;
    }

    cout << c;

    return 0;
}
