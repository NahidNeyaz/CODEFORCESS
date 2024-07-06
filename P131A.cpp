#include<bits/stdc++.h>
using namespace std;


int d(string w)
{
    int c=0;
    int flag=0;
  for(char ch : w)
  {
    if(isupper(ch))
    c++;
  }
    if(isupper(w[0]))
    flag=1;
  if(c==w.size())
  return (1);
  else if(flag==1 && c==1)
  return (2);
  else
  return -1;

}
void solve1(string w)
{
    int ans=d(w);
    if(ans==1)
{
    transform(w.begin(),w.end(),w.begin(), ::tolower);
}
else if(ans==2)
{
w[0]=toupper(w[0]);
for(int i=1;i<w.size();i++)
w[i]=tolower(w[i]);
}
else if(ans==-1)
{
    w=w;
}
cout<<w<<endl;
}
int main()
{
string w;
cin>>w;
solve1(w);
}