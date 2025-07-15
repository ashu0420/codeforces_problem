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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int x;
    for (int i = 0; i < n; i++)
    {
        cn(x);
        x %= k;
        if (x > 0)
        {
            v.push_back(k - x);
        }
    }

    if (v.size() > 0)
    {
        srt(v);
        vector<pair<int, int>> vp;
        int curr = v[0];
        int cnt = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == curr)
            {
                cnt++;
            }
            else
            {
                vp.push_back({curr, cnt});
                cnt = 1;
                curr = v[i];
            }
        }
        vp.push_back({curr, cnt});
        sort(vp.begin(), vp.end(), [](pair<int, int> &x, pair<int, int> &y)
             { return x.second > y.second || (x.second == y.second && x.first > y.first); });
        auto [l, r] = vp.front();
        ll ans = 1LL * (r - 1) * k + l + 1;
      
        // ct(l);
        ct(ans);
    }
    else
    {
        ct(0);
    }
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