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

void solve()
{
    // Your code here
    string l, r;
    cin >> l >> r;
    ll n = l.size();
    // vector<ll> v(n);
    ll ans = 0;
    ll i;
    for (i = 0; i < n; i++)
    {
        if (l[i] == r[i])
        {
            // v[i] = 2;
            ans += 2;
        }
        else
        {
            break;
        }
    }
    // ll j = i;
    // for (i; i < n; i++)
    // {
    //     ll k = r[i] - l[i];
    //     v[i] = k;
    // }
    ll k = r[i] - l[i];
    if (k > 1)
    {
        ct(ans);
        // X;
        return;
    }
    if (k == 1)
    {
        ans++;
        i++;
    }

    for (i; i < n; i++)
    {
        if (r[i] - l[i] == -9)
        {
            ans++;
        }
        else
        {
            ct(ans);
            return;
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}