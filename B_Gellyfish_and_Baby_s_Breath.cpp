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
const int MOD = 998244353;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vin(a, n);
    vin(b, n);
    vector<pair<int, int>> va(n), vb(n);
    va[0] = {a[0], 0};
    vb[0] = {b[0], 0};
    vector<int> dp(n + 1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = (dp[i - 1] * 2) % MOD;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > va[i - 1].first)
        {
            va[i].first = a[i];
            va[i].second = i;
        }
        else
        {
            va[i] = va[i - 1];
        }
        if (b[i] > vb[i - 1].first)
        {
            vb[i].first = b[i];
            vb[i].second = i;
        }
        else
        {
            vb[i] = vb[i - 1];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << va[i].first << " " << vb[i].first << endl;
    // }
    vector<ll> ans(n);
    for (int i = 0; i < n; i++)
    {
        int p, q;
        if (va[i].first > vb[i].first)
        {
            p = va[i].first;
            q = b[i - va[i].second];
        }
        else if (va[i].first < vb[i].first)
        {
            p = vb[i].first;
            q = a[i - vb[i].second];
        }
        else
        {
            p = va[i].first;
            if (a[i - vb[i].second] > b[i - va[i].second])
            {

                q = a[i - vb[i].second];
            }
            else
            {
                q = b[i - va[i].second];
            }
        }
        ans[i] = (dp[p] + dp[q]) % MOD;
        // int j = 1;
        // while (p--)
        // {
        //     j *= 2;
        //     j %= MOD;
        // }
        // ans[i] = j;
        // j = 1;
        // while (q--)
        // {
        //     j *= 2;
        //     j %= MOD;
        // }
        // ans[i] += j;
        // ans[i] %= MOD;
    }
    out(ans, n);
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