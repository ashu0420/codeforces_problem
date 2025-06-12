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
    vector<string> a(n); \
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
    vin(b, n);

    for (int i = 0; i < n; i++)
    {
        int x = 0, y = 0;
        for (int j = 0; j < m; j++)
        {
            x += a[i][j]-'0';
            y += b[i][j]-'0';
        }
        if ((x % 3) != (y % 3))
        {
            pn;
            return;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int x = 0, y = 0;
        for (int j = 0; j < n; j++)
        {
            x += a[j][i]-'0';
            y += b[j][i]-'0';
        }
        // cout << x << " " << y << endl;
        if ((x % 3) != (y % 3))
        {
            pn;
            return;
        }
    }
    py;
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