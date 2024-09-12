#include<bits/stdc++.h>
using namespace std;
vector<int>primefactor(int n)
{
    vector<int>factors;
    while(n%2==0)
    {
        factors.push_back(2);
        n/=2;
    }
    for(int i=3; i*i<=n; i+=2)
    {
        while(n%i==0)
        {
            factors.push_back(i);
            n/=i;
        }
    }
    if(n>2) factors.push_back(n);
    return factors;
}
int lcm(int a,int b)
{
    vector<int>v1 = primefactor(a);
    vector<int>v2 = primefactor(b);
    int i=0,j=0,lcm=1;
    while(i<v1.size() && j<v2.size())
    {
        if(v1[i]==v2[j])
        {
            lcm*=v1[i];
            i++;
            j++;
        }
        else
        {
            lcm*=v1[i];
            lcm*=v2[j];
            j++;
            i++;
        }
        while (i < v1.size() && j < v2.size())
        {
            if (v1[i] == v2[j])
            {
                lcm *= v1[i];
                i++;
                j++;
            }
            else if (v1[i] < v2[j])
            {
                lcm *= v1[i];
                i++;
            }
            else
            {
                lcm *= v2[j];
                j++;
            }
        }
        // Handle remaining factors
        while (i < v1.size())
        {
            lcm *= v1[i];
            i++;
        }
        while (j < v2.size())
        {
            lcm *= v2[j];
            j++;
        }
        return lcm;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<endl;
    }
}
