#include <iostream>

using namespace std;

int main()
{
    string queue[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;

    cin >> n;

    while(n>5)
    {
        n /= 2;
        n -= 2;
    }

    cout << queue[n-1];
    
    return 0;
}
