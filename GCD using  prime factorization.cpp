#include<bits/stdc++.h>
using namespace std;
vector<int>primefactors(int n)
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
    if(n>2)
        factors.push_back(n);
    return factors;
}
int Gcd(int n1, int n2)
{
    vector<int>v1=primefactors(n1);
    vector<int>v2=primefactors(n2);
    int i=0,j=0,gcd=1;
    while(i<v1.size() && j< v2.size())
    {
        if(v1[i]==v2[i])
        {
            gcd*=v1[i];
            i++; j++;
        }
        else if(v1[i]>v2[j]) j++;
        else i++;
    }
    return gcd;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        cout<<Gcd(n1,n2)<<endl;
    }
}
