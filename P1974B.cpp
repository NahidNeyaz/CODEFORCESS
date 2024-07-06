#include<bits/stdc++.h>
using namespace std;




void solv(string s, int n)
{
    set<char>setc;//store the distinct char
    vector<char>v1;//store the reverse
    for(int i=0;i<n;i++)
    setc.insert(s[i]);
    int l=setc.size();//no of distinctt char
    vector<char>v (setc.begin(),setc.end());// copied the distinct characters to a vector
    for(int i=l-1;i>=0;i--)
    {
     v1.push_back(v[i]);//descending order
    }
    unordered_map<char, char>map;
    for (int i = 0; i < l; i++) {
        map[v[i]] = v1[i];
    }

    // Substitute each char in the original string with the map cha
    for (int i = 0; i < n; i++) {
        if (map.find(s[i]) != map.end()) {
            s[i] = map[s[i]];
        }
    }
    cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    int n;
    string s;
    for(int i=0;i<t;i++)
    {
    cin>>n;
    cin>>s;
    solv(s,n);
}
}