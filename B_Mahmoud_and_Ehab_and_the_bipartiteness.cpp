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
vector<vector<int>> ad(100001);
vector<int> vis(100001, 0);
vector<int> f(100001, -1);
void dfs(int node, bool k)
{
    vis[node] = 1;
    f[node] = (k ^ 1);
    // ct(f[node]);
    for (auto i : ad[node])
    {
        if (vis[i] == 0)
        {
            dfs(i, f[node]);
            // X;
        }
    }
}
void solve()
{
    // Your code here
    int n;
    cn(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    dfs(1, 0);
    // out(f, n + 1);
    int r = 0, b = 0;
    for (int i = 1; i <= n; i++)
    {
        if (f[i])
        {
            r++;
        }
        else
        {
            b++;
        }
    }
    // ct(r);
    // ct(b);
    ll ans = 1LL * r * b;
    ans -= 1LL * (n - 1);
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}