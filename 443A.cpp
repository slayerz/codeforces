//443A - Anton and Letters

#include <iostream>

using namespace std;

int main()
{
    string line;
    int i, d=0, letter[26]={0};

    getline(cin, line);

    for(i=0; i<line.size(); i++)
        if(isalpha(line[i]))
            letter[line[i]-'a']++;

    for(i=0; i<26; i++)
        if(letter[i]>0)
            d++;

    cout << d;

    return 0;
}
