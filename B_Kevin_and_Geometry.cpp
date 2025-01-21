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
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    ll n;
    cn(n);
    vin(v, n);
    sort(v);
    ll eq = -1;
    for (ll i = n - 1; i > 0; i--)
    {
        if (v[i] == v[i - 1])
        {
            eq = v[i];
            v[i] = 0;
            v[i - 1] = 0;
            break;
        }
    }
    if (eq == -1)
    {
        ct("-1");
        return;
    }
    sort(v);
    for (ll i = 3; i < n; i++)
    {
        if (v[i] - v[i - 1] < 2 * eq)
        {
            cout << v[i] << " " << v[i - 1] << " " << eq << " " << eq << endl;
            return;
        }
    }
    ct("-1");
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