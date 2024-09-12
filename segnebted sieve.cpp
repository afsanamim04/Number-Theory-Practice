#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sieve(ll n )
{
    vector<ll>v;
    ll ar[100000+1];
    memset(ar,0,sizeof(ar));
    for(ll i=2; i*i<=n; ++i)
    {
        if(ar[i]==0)
        {
            for(ll j=i*i; j<=n; j+=i)
            {
                ar[j]=1;
            }
        }
    }
    for(ll i=0; i<n; i++)
    {
        if(ar[i]==0)
            v.push_back(i);
    }
}

void segment(ll l, ll r)
{
    if(l==1)l++;
    int mx=r-l+1;
    int arr[mx+1];
    for( ll i=0; i<=mx; i++)arr[i]=0;
    for(ll p=2; p<v.size(); p++)
    {
        if(p*p<=r)
        {
            ll i=(l/p)*p;
            if(i<l)i*p;
            for(; i<=r; i+=p)
            {
                if(i!=p)
                {
                    ar[i-l]=1;
                }
            }
        }
    }
    for(ll i=0; i<mx; i++)
    {
        if(ar[i]==0)
        {
            cout<<l+i<<nl;
        }
    }
}

int main()
{
    sieve(100000);
    ll t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        segment(l,r);
        cout<<nl;
    }
    return 0;
}
