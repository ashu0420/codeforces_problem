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
const ll MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    ll n;
    cn(n);
    vin(a, n);
    if (n == 1)
    {
        ct(0);
        return;
    }
    vector<ll> pre(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        pre[i] = sum + a[i];
        sum = pre[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n - 1; i += 2)
    {
        if ((a[i + 1] - a[i]) < 0)
        {
            ans++;
        }
    }
    for (ll i = 2; i < n; i = i * 2)
    {
        for (ll j = i - 1; j < n - i; j += (2 * i))
        {
            if (abs(pre[j + i] - 2 * pre[j] + (j - i > 0 ? pre[j - i] : 0)) != (i * i))
            {
                ct(-1);
                // ct(abs(pre[j+i]-2*pre[j]+(j-1>0?pre[j-i]:0)));
                return;
            }
            else if (pre[j + i] - 2 * pre[j] + (j - i > 0 ? pre[j - i] : 0) < 0)
            {
                ans++;
            }
        }
    }
    ct(ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}