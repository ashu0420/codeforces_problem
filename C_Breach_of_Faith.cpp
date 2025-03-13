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
    ll n;
    cn(n);
    vin(b, 2 * n);
    sort(b);
    ll sum1 = 0;
    ll sum2 = 0;
    for (ll i = 1; i < n; i++)
    {
        sum1 += b[i];
    }
    for (ll i = n; i < 2 * n - 1; i++)
    {
        sum2 += b[i];
    }

    vector<ll> ans(2 * n + 1);
    ans[1] = sum2 - sum1 + b[0] + b[2 * n - 1];
    ll j = 1;
    for (ll i = 3; i < 2 * n + 1; i += 2, j++)
    {
        ans[i] = b[j];
    }
    ans[0] = b[0];
    for (ll i = 2; i < 2 * n + 1; i += 2, j++)
    {
        ans[i] = b[j];
    }
    out(ans, 2 * n + 1);
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