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
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    ll n, m;
    cin >> n >> m;
    vin(a, n);
    vin(b, m);
    sort(b);
    a[n - 1] = max(a[n - 1], b[m - 1] - a[n - 1]);
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] != a[i + 1])
        {
            ll x = a[i] + a[i + 1];
            if (x >= b[0])
            {
                auto it = lower_bound(b.begin(), b.end(), x);
                ll y;
                if (it == b.end())
                {
                    y = b[m - 1];
                }
                else
                {
                    if (*it > x)
                    {
                        it--;
                    }
                    y = *it;
                }
                if (max(a[i], y - a[i]) <= a[i + 1])
                {
                    a[i] = max(a[i], y - a[i]);
                }
                else
                {
                    a[i] = min(a[i], y - a[i]);
                    if (a[i] > a[i + 1])
                    {
                        pn;
                        return;
                    }
                }
            }
            else
            {
                if (a[i] > a[i + 1])
                {
                    pn;
                    return;
                }
            }
        }
    }
    // out(a,n);
    py;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}