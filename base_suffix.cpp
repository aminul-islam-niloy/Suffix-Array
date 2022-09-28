#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int len = s.length();
    vector<pair<string, int>> suffixes;
    for (int i = 0; i < len; i++)
    {
        suffixes.push_back({s.substr(i), i});
    }

    sort(suffixes.begin(), suffixes.end());
      cout<<len<< " ";
    for (int i = 0; i < len; i++)
    {
        cout << suffixes[i].second << " ";
    }
    cout << endl;

}