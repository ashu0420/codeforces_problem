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
    int n;
    cn(n);

    vector<pair<ll, ll>> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i].first >> c[i].second;
    }
    if (n == 1)
    {
        ct(n);
        return;
    }
    srt(c);
    ll ans = LONG_LONG_MAX;
    ll mn = 1e9;
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, c[i].second);
        mx = max(mx, c[i].second);
    }
    ans = (c[n - 1].first - c[0].first + 1LL) * (mx - mn + 1LL);
    if (ans < n)
    {
        ans += min((c[n - 1].first - c[0].first + 1LL), (mx - mn + 1LL));
    }
    if (c[0].first != c[1].first)
    {
        ll mny = 1e9;
        ll mxy = 0;
        for (int i = 1; i < n; i++)
        {
            mny = min(mny, c[i].second);
            mxy = max(mxy, c[i].second);
        }
        ans = min(ans,(c[n - 1].first - c[1].first + 1LL) * (mxy - mny + 1LL));

        if (ans < n)
        {
            ans += min((c[n - 1].first - c[1].first + 1LL), (mxy - mny + 1LL));
        }
        // ct(ans);
    }
    if (c[n - 2].first != c[n - 1].first)
    {
        ll mny = 1e9;
        ll mxy = 0;
        for (int i = 0; i < n - 1; i++)
        {
            mny = min(mny, c[i].second);
            mxy = max(mxy, c[i].second);
        }
        ans = min(ans, (c[n - 2].first - c[0].first + 1LL) * (mxy - mny + 1LL));
        // ct(ans);
        if (ans < n)
        {
            ans += min((c[n - 2].first - c[0].first + 1LL), (mxy - mny + 1LL));
        }
    }
    sort(c.begin(), c.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b)
         { return a.second < b.second; });
    if (c[0].second != c[1].second)
    {
        ll mny = 1e9;
        ll mxy = 0;
        for (int i = 1; i < n; i++)
        {
            mny = min(mny, c[i].first);
            mxy = max(mxy, c[i].first);
        }
        ans = min(ans, (c[n - 1].second - c[1].second + 1LL) * (mxy - mny + 1LL));
        if (ans < n)
        {
            ans += min((c[n - 1].second - c[1].second + 1LL), (mxy - mny + 1LL));
        }
    }
    if (c[n - 2].second != c[n - 1].second)
    {
        ll mny = 1e9;
        ll mxy = 0;
        for (int i = 0; i < n - 1; i++)
        {
            mny = min(mny, c[i].first);
            mxy = max(mxy, c[i].first);
        }
        ans = min(ans, (c[n - 2].second - c[0].second + 1LL) * (mxy - mny + 1LL));
        if (ans < n)
        {
            ans += min((c[n - 2].second - c[0].second + 1LL), (mxy - mny + 1LL));
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