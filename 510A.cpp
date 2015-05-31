//510A - Fox And Snake

#include <iostream>

using namespace std;

int main()
{
    int n, m, i, k, s, flag=0;

    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        s = 0;

        for(k=0; k<m; k++)
        {
            if((i+1)%2 == 0)
            {
                if(flag==0)
                {
                    if(k+1==m && s==0)
                    {
                        cout << '#';
                        flag = 1;
                    }
                    else
                        cout << '.';
                }
                else
                {
                    if(k==0)
                    {
                        cout << '#';
                        flag = 0;
                        s = 1;
                    }
                    else
                        cout << '.';
                }
            }
            else
                cout << '#';
        }

        cout << endl;
    }

    return 0;
}
