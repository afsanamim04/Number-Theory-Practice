#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1(n,0);v1[0]=1;v1[1]=1;
    for(int i=2; i*i<=n; i++)
    {
        if(v1[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                v1[j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(v1[i]==0)
        cout<<i<<' ';
    }
    return 0;
}

