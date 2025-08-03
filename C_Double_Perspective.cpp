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

ll mod_pow(ll x, ll y)
{
    ll result = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return result;
}

ll modular_inverse(ll denom)
{
    return mod_pow(denom, MOD - 2);
}
vector<vector<int>> ad(6e3 + 1);
vector<pair<int, int>> vp;
vector<int> vis(6e3 + 1, 0);
void dfs(int node)
{
    vis[node] = 1;
    for (auto i : ad[node])
    {
        if (vis[i] == 0)
        {
            vp.push_back({min(node, i), max(node, i)});
            dfs(i);
        }
    }
}
void solve()
{
    // Your code here
    int n;
    cn(n);
    map<pair<int, int>, int> mp;
    for(int i=0;i<=2*n;i++)
    {
        ad[i].clear();
        vis[i]=0;
    }
    vp.clear();
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        mp[{u, v}] = i + 1;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    for (int i = 1; i <= 2 * n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
        }
    }
    vector<int> ans;
    for(auto i:vp)
    {
        ans.push_back(mp[i]);
    }
    srt(ans);
    ct(ans.size());
    out(ans,ans.size());
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