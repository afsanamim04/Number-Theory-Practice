#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

 int main()
 {

         ll n;
         cin>>n;
         set<ll>s;
         for(ll i=1;i*i<=n;i++)
         {
             if(n%i==0)
             {
                 ll x=i;
                 ll y=n/i;
                 s.insert(x);
                 s.insert(y);
             }
         }
         for(auto it:s)
            cout<<it<<nl;
         cout<<nl;
         s.clear();

     return 0;
 }
