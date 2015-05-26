//155A - I_love_%username%

#include <iostream>

using namespace std;

int main()
{
    int n, i, min, max;
    int sum=0, m[1000]={0};

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> m[i];

        if(i==0)
        {
            min = m[0];
            max = m[0];
        }
        
        if(m[i]<min)
        {
            min = m[i];
            sum++;
        }
        else if(m[i]>max)
        {
            max = m[i];
            sum++;
        }
    }

    cout << sum;

    return 0;
}
