//349A - Cinema Line

#include <iostream>

using namespace std;

int main()
{
    long long int n, i, n25=0, n50=0;
    bool ch=true;

    cin >> n;

    long long int tix[n];

    for(i=0; i<n; i++)
        cin >> tix[i];

    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            if(tix[i]>25)
            {
                ch = false;
                break;
            }
            else
                n25++;
        }
        else
        {
            if(tix[i] == 25)
                n25++;
            else if(tix[i] == 50)
            {
                if(n25>0)
                {
                    n50++;
                    n25--;
                }
                else
                {
                    ch = false;
                    break;
                }
            }
            else if(tix[i] == 100)
            {
                if(n25>0 && n50>0)
                {
                    n50--;
                    n25--;
                }
                else if(n25>2)
                    n25 -= 3;
                else
                {
                    ch = false;
                    break;
                }
            }
        }
    }

    if(ch)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
