#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll ans=0,m; cin>>m;
        for(ll i=0; i<s.size(); ++i)
        {
           ans=ans*10+s[i]-'0';
           ans=ans%m ;
        }
        if(ans%m==0) cout<<"yes"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}
