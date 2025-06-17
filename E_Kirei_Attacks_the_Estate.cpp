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
const int N = 2 * 1e5 + 1;
vector<vector<int>> ad(N + 1);
vector<int> vis(N + 1, 0);
vector<ll> mx(N + 1);
vector<ll> mn(N + 1);
vector<ll>a(N+1);
void dfs(int node, int par)
{
    vis[node] = 1;
    mx[node] = max(a[node-1], a[node-1] - mn[par]);
    mn[node] = min(a[node-1], a[node-1] - mx[par]);
    //   cout << node <<"->"<<par<< " " << mx[par] << " "
    //      << mn[par] << " " <<a[node-1] << endl;
    for(auto i:ad[node])
    {
        if(vis[i]==0)
        {
            dfs(i,node);
        }
    }
   
}

void solve()
{
    // Your code here
    int n;
    cn(n);
    for(int i=0;i<n;i++)
    {
        cn(a[i]);
    }
    for(int i=0;i<=n;i++)
    {
        vis[i]=0;
        ad[i].clear();
        // mx[i]=LONG_LONG_MIN;
        // mn[i]=LONG_LONG_MAX;
        mx[i]=0;
        mn[i]=0;

    }
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    // mx[1] = a[0];
    // mn[1] = a[0];
    dfs(1,0);
    for (int i = 1; i <= n; i++)
    {
        cout << mx[i] << " ";
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