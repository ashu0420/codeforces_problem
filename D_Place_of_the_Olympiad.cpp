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
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = 1;
    ll r = m;
    while (r - l > 1)
    {
        ll mid = (l + r) / 2;
        ll temp = (m / (mid)) * (mid - 1) + m % (mid);
        if (temp * n >= k)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    ll temp = (m / (l + 1)) * (l) + m % (l + 1);
    if (temp * n >= k)
    {
        ct(l);
        return;
    }
    ct(r);
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