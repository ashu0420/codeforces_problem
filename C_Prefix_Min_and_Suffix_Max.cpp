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
#define in1(a, n) \
    fr(ll, 1, n + 1) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define out1(a, n)                            \
    fr(ll, 1, n + 1) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define srt(a) sort(a.begin(), a.end());
#define rev(a) reverse(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
#define vin1(a, n)       \
    vector<ll> a(n + 1); \
    in1(a, n);
const int MOD = 1e9 + 7;

using namespace std;

ll mod_pow(ll x, ll y)
{
    ll result = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return result;
}

ll modular_inverse(ll denom)
{
    return mod_pow(denom, MOD - 2);
}

void solve()
{
    // Your code here
    int n;
    cn(n);
    vin(a, n);
    vector<int> pre(n), suff(n);
    ll mn = a[0];
    for (int i = 0; i < n; i++)
    {
        mn = min(a[i], mn);
        pre[i] = mn;
    }
    ll mx = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        mx = max(a[i], mx);
        suff[i] = mx;
    }
    cout << "1";
    for (int i = 1; i < n - 1; i++)
    {
        if ((pre[i - 1] >= a[i] && suff[i + 1] >= a[i]) || (pre[i - 1] <= a[i] && suff[i + 1] <= a[i]) || (pre[i - 1] >= a[i] && suff[i + 1] <= a[i]))
            cout << "1";
        else
            cout << "0";
    }
    cout<<"1";
    cout<<endl;
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