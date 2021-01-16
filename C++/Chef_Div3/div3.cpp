#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t,N,K,D,i,sum,d;
    scanf("%lld",&t);
    while(t>0)
    {
        sum=0;
        cin>>N>>K>>D;
        ll A[N];
        for(i=0; i<N; ++i)
        {
            cin>>A[i];
            sum+=A[i];
        }

        d=sum/K;
        if(d>D)
            cout<<"\n"<<D;
         else
            cout<<"\n"<<d;

        --t;
    }

    return 0;
}
