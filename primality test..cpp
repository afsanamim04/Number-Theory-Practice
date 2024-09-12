#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    if(n<2)
    {
        cout<<"not prime"<<endl;
        return 0;
    }
    if(n<=3)
    {
        cout<<"prime"<<endl;
        return 0;
    }
    if(n%2==0)
    {
        cout<<"not prime"<<endl;
        return 0;
    }
    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
            flag++;
    }
    if(flag==0)
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;
    return 0;
}
