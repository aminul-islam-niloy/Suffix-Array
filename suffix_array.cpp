#include<iostream>
#include<string.h>
#include<map>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
string a;
map< string,int> m;
cin >> a;                
vector< string> b;
for(int i = 0; i < a.size();i++)
{
m[a.substr(i,a.size()-i)] = i;    
b.push_back(a.substr(i,a.size()-i));
}
sort(b.begin(),b.end());

cout<<a.size()<<" ";


for(int i = 0; i < b.size();i++)
{
  cout<< m[b[i]]<< " " ;
}
return 0;
}