#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll h;
        cin >> n >> h;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        ll l = 1, r = 1e18;
        while (l <= r)
        {
            ll m = (l + r) / 2;
            ll sum = m;
            for (int i = 0; i < n - 1; ++i)
                sum += min(m, a[i + 1] - a[i]);
            if (sum < h)
            {
                l = m + 1;
            }
            else
            {
                 r = m - 1;
            }
        }
        cout << r + 1 <<endl;
    }
}
