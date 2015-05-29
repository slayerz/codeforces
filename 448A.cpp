//448A - Rewards

#include <iostream>

using namespace std;

int main()
{
    int a[3], b[3], n, i, sumA=0, sumB=0, shelf=0;

    for(i=0; i<3; i++)
    {
        cin >> a[i];
        sumA += a[i];
    }

    for(i=0; i<3; i++)
    {
        cin >> b[i];
        sumB += b[i];
    }

    cin >> n;

    while(sumA>0)
    {
        if(sumA>5)
        {
            shelf++;
            sumA -= 5;
        }
        else
        {
            shelf++;
            break;
        }
    }

    while(sumB>0)
    {
        if(sumB>10)
        {
            shelf++;
            sumB -= 10;
        }
        else
        {
            shelf++;
            break;
        }
    }

    if(shelf>n)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
