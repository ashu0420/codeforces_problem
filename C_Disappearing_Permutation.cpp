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
    int n;
    cn(n);
    vector<int> p(n + 1), d(n + 1), vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cn(p[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cn(d[i]);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[d[i]] == 0)
        {
            int k = d[i];
            while (vis[k] == 0)
            {
                cnt++;
                vis[k] = 1;
                k = p[k];
            }
        }
        cout << cnt << " ";
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