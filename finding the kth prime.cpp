#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k,a[n+5];
    cin>>k;
    memset(a,0,sizeof(a));
    a[0]=1;a[1]=1;
    for(int i=2; i*i<=n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0)
        cout<<i<<' ';
    }
    cout<<endl;
    vector<int>v2;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
        v2.push_back(i);
        }
    }
    cout<<v2[k-1]<<endl;
    return 0;
}

