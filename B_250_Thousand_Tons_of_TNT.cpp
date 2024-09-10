#include <bits/stdc++.h>
#define ll long long
#define li long
#define cn(n) cin >> n
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ct(c) cout << c << endl
#define fr(dt, a, b) for (dt i = a; i < b; i++)
#define in(a, n) \
    fr(ll, 0, n) { cn(a[i]); }
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vector<li> v(n);
    in(v, n);
    int k = 1;
    ll ans = 0;
    ll sum = 0;
    while (k <= n / 2)
    {
        ll minM = LONG_LONG_MAX;
        ll maxM = 0;
        if (n % k == 0)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
                count++;
                if (count == k)
                {
                    minM = min(sum, minM);
                    maxM = max(maxM, sum);
                    count = 0;
                    sum = 0;
                }
            }

            ans = max(ans, maxM - minM);
        }
        k++;
    }
    ct(ans);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}