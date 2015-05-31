//339B - Xenia and Ringroad

 #include <iostream>

 using namespace std;

 int main()
 {
    long long int n, m, a, house, step=0;

    cin >> n >> m;
    house = 1;

    while(m--)
    {
        cin >> a;

        if(a>house)
            step += a-house;
        else if(a<house)
            step += n-house+a;

        house = a;
    }

    cout << step;

    return 0;
 }
