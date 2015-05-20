//432A - Choosing Teams

#include <iostream>

using namespace std;

int main()
{
    int k, y, p;
    int sum=0;

    cin >> k >> y;

    while(k--)
    {
        cin >> p;

        if(p+y<=5)
            sum++;
    }

    cout << sum/3;
    
    return 0;
}
