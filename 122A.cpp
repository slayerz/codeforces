//122A - Lucky Division

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream out;
    string n;
    int i, k;
    bool lucky=true;

    cin >> k;
    out << k;
    n = out.str();

    for(i=0; i<n.size(); i++)
        if(n[i]!='4' && n[i]!='7')
            lucky = false;

    if(lucky==false)
    {
        if(k%4!=0 && k%7!=0 && k%47!=0 && k%74!=0)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
