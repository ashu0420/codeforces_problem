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
ll count_bad(ll n)
{
    ll res = 0;
    res += n / 2 + n / 3 + n / 5 + n / 7;
    res -= n / 6 + n / 10 + n / 14 + n / 15 + n / 21 + n / 35;
    res += n / 30 + n / 42 + n / 70 + n / 105;
    res -= n / 210;
    return res;
}
// void solve()
// {
//     // Your code here
//     ll l, r;
//     cin >> l >> r;
//     ll total = r - l + 1;
//     ll bad = count_bad(r) - count_bad(l - 1);
//     ll ans = total - bad;
//     ct(ans);
// }
void solve()
{
    // Your code here
    ll l, r;
    cin >> l >> r;
    ll ans = r - l + 1;
    ans -= r / 2;
    ans -= r / 3;
    ans -= r / 5;
    ans -= r / 7;
    ans += l / 2;
    ans += l / 3;
    ans += l / 5;
    ans += l / 7;
    ans += r / 6;
    ans += r / 10;
    ans += r / 14;
    ans += r / 15;
    ans += r / 21;
    ans += r / 35;
    ans -= l / 6;
    ans -= l / 10;
    ans -= l / 14;
    ans -= l / 15;
    ans -= l / 21;
    ans -= l / 35;

    ans -= r / 30;
    ans -= r / 42;
    ans -= r / 70;
    ans -= r / 105;
    ans += l / 30;
    ans += l / 42;
    ans += l / 70;
    ans += l / 105;
    ans += r / 210;
    ans -= l / 210;
    if (l % 2 == 0 || l % 3 == 0 || l % 5 == 0 || l % 7 == 0)
    {
        ans--;
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}