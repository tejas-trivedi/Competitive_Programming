
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        long long sum=0, ans=0;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
            ans = ans | arr[i];
            ans = ans | sum;
        }
        cout<< (ans|sum) <<endl;
    }
	return 0;
}

