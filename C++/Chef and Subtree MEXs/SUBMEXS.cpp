#include<bits/stdc++.h>
using namespace std;

long long int n,l,t;
long long ll_min(long long x,long long y)
{
    if(x>y)
        return y;
    else
        return x;
}

long long ll_max(long long x,long long y)
{
    if(x>y)
        return x;
    else
        return y;
}
long long a[100000+10],b[100000+10],vis[100000+10];
vector<long long int> adjlist[1000000+10];
int main()
{
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<=n;i++)
        {
            b[i]=1;
        }
        for(int i=n-2;i>=0;i--)
        {
            b[a[i]]+=b[i+2];
        }

        for(int i=0;i<=n;i++)
        {
            vis[i]=0;
        }
        for(int i=0;i<n-1;i++)
        {
            adjlist[a[i]].push_back(i+2);
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<adjlist[i].size();j++)
            {
                b[adjlist[i][j]]+=b[i];
            }
        }

        l=0;
        for(int i=0;i<=n;i++)
        {
            l=ll_max(b[i],l);
        }
        cout<<l<<endl;
        for(int i=0;i<=n;i++)
        {
            adjlist[i].clear();
        }
    }
    return 0;
}
