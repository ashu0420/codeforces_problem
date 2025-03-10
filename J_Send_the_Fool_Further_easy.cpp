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
vector<vector<int>> ad(101);
vector<int> vis(101, 0);
map<pair<int, int>, ll> mp;
ll ans = 0;
void dfs(int node, ll curr)
{
    vis[node] = 1;
    for (auto i : ad[node])
    {
        if (vis[i] == 0)
        {
            dfs(i, curr + mp[{min(node, i), max(node, i)}]);
        }
    }
    // ct(curr);
    ans = max(ans, curr);
}
void solve()
{
    // Your code here
    int n;
    cn(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        ad[u].push_back(v);
        ad[v].push_back(u);
        mp[{min(u, v), max(u, v)}] = c;
    }
    int curr = 0;
    dfs(0, 0);
    // out(vis,n);
    // out(ad[0],ad[0].size());
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