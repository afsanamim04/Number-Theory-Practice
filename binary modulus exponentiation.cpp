#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int base,pow,res=1,mod;
        cin>>base>>pow>>mod;
        while(pow)
        {
            if(pow%2==1)
            {
              res=(res*base)%mod;
              pow--;
            }
            else
            {
                base=(base*base)%mod;
                pow/=2;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
