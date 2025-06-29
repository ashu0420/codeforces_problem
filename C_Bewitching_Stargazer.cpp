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
// void check(ll l, ll r, ll k, ll &ans)
// {
//     // if (l == r && k == 1)
//     // {
//     //     ans += l;
//     //     return;
//     // }
//     ll m = (l + r) / 2;
//     if ((r - l + 1) % 2 == 1)
//     {
//         ans += m;
//         if (m - l  < k)
//         {
//             return;
//         }
//         check(l, m - 1, k, ans);
//         check(m + 1, r, k, ans);
//     }
//     else
//     {
//         if (m - l +1< k)
//         {
//             return;
//         }
//         check(l, m, k, ans);
//         check(m + 1, r, k, ans);
//     }
// }

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll ans = 0;
    ll curr = 1;
    ll mul = n + 1;
    while (n >= k)
    {
        // ct("x");
        if (n % 2)
            ans += curr;
        curr *= 2;
        n /= 2;
    }

    cout << mul*ans/2 << "\n";
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