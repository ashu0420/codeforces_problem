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
vector<vector<int>> ad(100005);
vector<int> vis(100005, 0), dis(100005, 0);
void dfs(int node, int d)
{
    vis[node] = 1;
    dis[node] = d;
    for (auto i : ad[node])
    {
        if (vis[i] == 0)
        {
            dfs(i, dis[node]+1);
        }
    }
    return;
}

void solve()
{
    // Your code here
    int n, st, en;
    cin >> n >> st >> en;
    
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    int d = 0;
    // dis[en] = d;
    dfs(en, d);
    // out(dis,n+1);
    vector<pair<int,int>> ans(n);
    for(int i=1;i<=n;i++)
    {
        ans[i-1]={dis[i],i};
    }
    sort(ans);
    for(int i=n-1;i>=0;i--)
    {
        cout<<ans[i].second<<" ";
    }
    cout<<endl;
    for (int i = 0; i <= n; i++)
    {
        ad[i].clear();
        // dis[i] = 0;
        vis[i] = 0;
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