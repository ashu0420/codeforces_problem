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
    vin(a, n);
    vin(b, n);
    int ans = 0;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        v[a[i]]++;
        v[b[i]]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == b[i])
        {
            ans = i + 1;
        }
        if (a[i] == a[i + 1] || b[i] == b[i + 1])
        {
            ans = i + 1;
        }
        int x = --v[a[i]];
        int y = --v[b[i]];
        if (a[i] == b[i + 1])
        {
            x--;
        }
        if (b[i] == a[i + 1])
        {
            y--;
        }
        if (x > 0 || y > 0)
        {
            ans = i + 1;
        }
    }
    if(a[n-1]==b[n-1])
    {
        ans=n;
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