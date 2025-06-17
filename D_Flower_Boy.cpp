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
    int n, m;
    cin >> n >> m;
    vin(a, n);
    vin(b, m);
    int i = 0, j = 0;
    if (m == 1)
    {
        for (auto i : a)
        {
            if (i >= b[0])
            {
                ct(0);
                return;
            }
        }
        ct(b[0]);
        return;
    }
    vector<int> pre(m, -1);
    while (i < n && j < m)
    {
        if (a[i] >= b[j])
        {
            pre[j] = i;
            // i++;
            j++;
        }
        // else
        // {
        i++;
        // }
    }
    if (j == m)
    {
        ct(0);
        return;
    }
    i = n - 1;
    j = m - 1;
    vector<int> suff(m, -1);
    while (i >= 0 && j >= 0)
    {
        if (a[i] >= b[j])
        {
            suff[j] = i;
            // i--;
            j--;
        }
        // else
        // {
        i--;
        // }
    }
    ll ans = 1e9 + 1;
    for (int k = 1; k < m - 1; k++)
    {
        if (pre[k - 1] >= 0 && suff[k + 1] >= 0 && pre[k - 1] < suff[k + 1])
        {
            ans = min(ans, b[k]);
        }
    }
    if (suff[1] >= 0)
    {
        ans = min(ans, b[0]);
    }
    if (pre[m - 2] >= 0)
    {
        ans = min(ans, b[m - 1]);
    }
    if (ans == 1e9 + 1)
    {
        ct(-1);
    }
    else
    {
        ct(ans);
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