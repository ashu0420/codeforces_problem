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
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int tn = n, tm = m, ta = a, tb = b;
    int c = 1;
    n = min(a, n - a + 1);
    while (n > 1)
    {
        n = (n + 1) / 2;
        c++;
    }
    while (m > 1)
    {
        m = (m + 1) / 2;
        c++;
    }
    int tc = 1;
    tm = min(b, tm - b + 1);
    while (tn > 1)
    {
        tn = (tn + 1) / 2;
        tc++;
    }
    while (tm > 1)
    {
        tm = (tm + 1) / 2;
        tc++;
    }
    ct(min(c, tc));
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
