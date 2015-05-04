#include <iostream>
#include <sstream>

using namespace std;

void b(int y)
{
    stringstream out;
    string x;
    int i, k;

    out << y;
    x = out.str();

    for(i=0; i<3; i++)
        for(k=i+1; k<4; k++)
            if(x[i] == x[k])
            {
                b(y+1);
                return;
            }

    cout << y;
}

int main()
{
    int y;

    cin >> y;
    b(y+1);

    return 0;
}
