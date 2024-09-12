#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int power(int base, int p, int m)
{
    int res=1;
    while(p)
    {
        if(p%2==1)
        {
            res=(res*base)%m;
            p--;
        }
        else
        {
            base=(base*base)%m;
            p/=2;
        }
    }
    return res%m;
}
int main()
{
    int a,b,m;  // (a*b)%m
    cin>>a>>b>>m;
    int x= power(b,m-2,m);
    int ans=(a*x)%m;
    cout<<ans<<nl;
    return 0;

}
