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
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n + 2, 0);
    if (n % 2 == 1)
    {
        for (int i = 2; i < max(x, y); i += 2)
        {
            v[i] = 1;
        }
        for (int i = n; i > max(x, y); i -= 2)
        {
            v[i] = 1;
        }
        v[max(x, y)] = 2;
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            v[i] = 1;
        }
        if (abs(x - y) % 2 == 0)
        {
            v[max(x, y)] = 2;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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