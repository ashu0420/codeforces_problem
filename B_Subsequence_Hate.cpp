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
    string s;
    cn(s);
    int n = s.size();
    vector<int> pre(n, 0), suff(n, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
        pre[i] = cnt;
    }
    cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
        suff[i] = cnt;
    }
    int ans = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, pre[i] + suff[i]);
    }
    rev(s);
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
        pre[i] = cnt;
    }
    cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
        suff[i] = cnt;
    }
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, pre[i] + suff[i]);
    }
    ct(ans-1);
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