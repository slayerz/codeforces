//131A - cAPS lOCK

#include <iostream>

using namespace std;

int main()
{
    string word;
    int i, c, l;
    bool cap, low;

    cin >> word;
    c = word.size();

    cap = true;
    low = true;

    for(i=0, l=0; i<c; i++) //all uppercase
    {
        if(islower(word[i]))
        {
            cap = false;
            l++;
        }
    }

    for(i=0; i<c; i++) //all lowercase
        if(isupper(word[i]))
            low = false;

    if(cap==false && low==false) //mix case
    {
        if(islower(word[0]) && l<=1)
        {
            for(i=0; i<c; i++)
            {
                if(i==0)
                    word[i] = char(toupper(word[i]));
                else
                    word[i] = char(tolower(word[i]));
            }
        }
    }
    else if(low) //all lowercase
    {
        if(c==1)
            word[0] = char(toupper(word[0]));
    }
    else if(cap)//all uppercase
    {
        for(i=0; i<c; i++)
            word[i] = char(tolower(word[i]));
    }

    cout << word;

    return 0;
}
