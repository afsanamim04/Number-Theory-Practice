#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll base,power,result=1;
    cin>>base>>power;
    while(power)
    {
     if(power%2==1)
     {
         result*=base;
         power--;
     }
     else
     {
         base*=base;
         power/=2;
     }
    }
    cout<<result<<nl;
    }
    return 0;
}
