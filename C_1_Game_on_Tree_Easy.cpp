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
vector<vector<int>> ad(200005);

vector<int> vis(200005, 0);
void dfs(int node, int &sz)
{
    vis[node] = 1;
    // sz++;
    // for (auto i : ad[node])
    {
        if (vis[ad[node][0]] == 0)
        {
            vis[ad[node][0]] = 1;
            sz++;
            dfs(ad[node][0], sz);
        }
        else if (ad[node].size() > 1 && vis[ad[node][1]] == 0)
        {
            vis[ad[node][1]] = 1;
            sz++;
            dfs(ad[node][1], sz);
        }
    }
    // return sz;
}
void solve()
{
    // Your code here
    int n, r;
    cin >> n >> r;

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    int j;
    cn(j);
    int sz = 0;
    dfs(j, sz);
    // ct(sz);
    if (sz % 2 == 1 || (n - sz - 1) % 2 == 1)
    {
        ct("Ron");
    }
    else
    {
        ct("Hermione");
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}