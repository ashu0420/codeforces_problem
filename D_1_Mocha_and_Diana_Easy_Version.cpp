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
vector<vector<int>> ad1(1001);
vector<vector<int>> ad2(1001);
vector<int> vis1(1001, 0);
vector<int> vis2(1001, 0);
vector<pair<int, int>> ans;
void dfs1(int node)
{
    vis1[node] = 1;
    for (auto i : ad1[node])
    {
        if (vis1[i] == 0)
        {
            dfs1(i);
        }
    }
}
void dfs2(int node)
{
    vis2[node] = 1;
    for (auto i : ad2[node])
    {
        if (vis2[i] == 0)
        {
            dfs2(i);
        }
    }
}

void solve()
{
    // Your code here
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    for (int i = 0; i < m1; i++)
    {
        int u, v;
        cin >> u >> v;
        ad1[u].push_back(v);
        ad1[v].push_back(u);
    }
    for (int i = 0; i < m2; i++)
    {
        int u, v;
        cin >> u >> v;
        ad2[u].push_back(v);
        ad2[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        dfs1(i);
        dfs2(i);
        bool flag = 0;
        for (int j = 1; j <= n; j++)
        {
            if (vis1[j] == 0 && vis2[j] == 0 && flag == 0)
            {
                ans.push_back({i, j});
                ad1[i].push_back(j);
                ad1[j].push_back(i);
                ad2[i].push_back(j);
                ad2[j].push_back(i);
                flag = 1;
            }
            vis1[j] = 0;
            vis2[j] = 0;
        }
    }
    ct(ans.size());
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
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