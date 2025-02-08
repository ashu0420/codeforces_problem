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
    ll n, x;
    cin >> n >> x;
    vin(v, n);
    sort(v);
    ll curr = 0;
    ll ans = 0;
    int i=1;
    for ( i = 1; i < n; i++)
    {
        ll temp = 0;
        if (v[i] > v[i - 1])
        {
            temp += 1LL * i * (v[i] - v[i - 1]);
        }
        if (temp + curr < x)
        {
            curr += temp;
            // ans = v[i];
            continue;
        }
        else
        {
           break;
        }
    }
    ans = v[i - 1] + ((x - curr) / i);
    ct(ans);
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