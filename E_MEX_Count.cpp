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

    vector<int> frq(n + 1, 0);
    set<int> s;

    for (auto i : a)
    {
        frq[i]++;
        s.insert(i);
    }
    int MEX = 0;
    for (int i = 0; i <= n; ++i)
    {
        if (!s.count(i))
        {
            MEX = i;
            break;
        }
    }
    vector<int> tm(n + 1, 0);
    for (int i=0;i<MEX;i++)
    {
        if (i < MEX)
            tm[frq[i]]++;
    }

    vector<int> ans(n + 1, 0);
    int cnt = 1;
    for (int i = n; i >= n + 1 - MEX; i--, cnt++)
    {
        ans[i] = cnt;
    }
    ans[0] = 1;
    for (int i = 1; i < n + 1 - MEX; i++)
    {
        ans[i] = ans[i - 1] + tm[i];
    }
    // vector<int> diff(n + 2, 0);

    // for (int j = 0; j <= MEX; ++j)
    // {
    //     int l = frq[j];
    //     int r = n - j;
    //     if (l <= r)
    //     {
    //         diff[l] += 1;
    //         diff[r + 1] -= 1;
    //     }
    // }

    // int sum = 0;
    // for (int i = 0; i <= n; ++i)
    // {
    //     sum += diff[i];
    //     ans[i] = (i == 0 || i == n) ? 1 : sum;
    // }

    out(ans, n + 1);
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