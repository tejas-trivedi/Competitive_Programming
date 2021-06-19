#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10000000];
ll b[10000000];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ma=0 ,mi=10000000;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            ma= max(ma, a[i]);
            mi= min(mi, a[i]);
        }
        ll t, k;
        for(int i=1; i<=n; i++)
        {
            if(a[i] == ma)
                t=i;
            if(a[i] == mi)
                k=i;
        }
       ll kq = min(t, n-t+1);
       ll kq1 = min(k, n-k+1);

        if(kq >= kq1)
        cout<<min( kq1+abs(t-k), kq+kq1) << endl;
        else
        cout<<min( kq+abs(t-k), kq1+kq) << endl;
    }
}
