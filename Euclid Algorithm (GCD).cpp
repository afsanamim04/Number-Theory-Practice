#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

ll  gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
     ll a,b;
     cin>>a>>b;
     ll ans=gcd(a,b);
     cout<<ans<<nl;
    }
    return 0;
}
