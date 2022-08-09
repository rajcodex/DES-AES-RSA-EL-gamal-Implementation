#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool mycmp(string s1,string s2)
{
    if(s1.length()>=s2.length())
    return true;
    return false;
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    string text;
    cin>>text;
    ll n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end(),mycmp);
    vector<pair<ll,ll>> res;
    int cnt=0;
    vector<bool> filled(n,false);
    for(int i=0;i<n;i++)
    {
        if(check(filled))
        break;
        string st=v[i];
        for(int j=0;j+st.length()<=text.length();j++)
        {
            if(st.compare(text.substr(j,st.length()))==0)
            {
                for(int k=j;k<j+st.length();k++)
                {
                    filled[k]=true;
                }
                res.push_back({})
                break;
            }
        }

    }
   }
}