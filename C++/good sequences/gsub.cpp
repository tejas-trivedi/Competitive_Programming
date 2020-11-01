#include <bits/stdc++.h>
using namespace std;

void sequence()
{
    long long n, q;
    cin >> n >> q;
    int arr[n];
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == t)
        {
            ans--;
        }
        else
        {
            t = arr[i];
        }
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int t1, t2;
        t1 = (x - 2 >= 0 && arr[x - 2] == arr[x - 1]) + (x < n && arr[x] == arr[x - 1]);
        arr[x - 1] = y;
        t2 = (x - 2 >= 0 && arr[x - 2] == arr[x - 1]) + (x < n && arr[x] == arr[x - 1]);
        ans += t1 - t2;
        cout << ans << "\n";
    }
}

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        sequence();
    }
}
