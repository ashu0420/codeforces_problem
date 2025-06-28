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
const int N = 2 * 1e5;
vector<vector<int>> ad(N + 1);
vector<int> vis(N + 1);
vector<int> col(N + 1);
void dfs(int node)
{
    vis[node] = 1;
    for (auto i : ad[node])
    {
        if (vis[i] == 0)
        {
            col[i] = 2 - col[node];
            dfs(i);
        }
    }
}

void solve()
{
    // Your code here
    int n;
    cn(n);
    for (int i = 0; i <= n; i++)
    {
        ad[i].clear();
        vis[i] = 0;
        col[i] = -1;
    }
    vector<pair<int, int>> vp;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        vp.push_back({u, v});
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    bool flag = 0;
    int root;
    for (int i = 1; i <= n; i++)
    {
        if (ad[i].size() == 2)
        {
            flag = 1;
            root = i;
            break;
        }
    }

    // ct(flag);
    if (flag)
    {
        py;
    }
    else
    {
        pn;
        return;
    }
    col[ad[root][0]] = 0;
    col[ad[root][1]] = 2;
    vis[root] = 1;
    dfs(ad[root][0]);
    dfs(ad[root][1]);
    col[root] = 1;
    for (auto i : vp)
    {
        if (col[i.first] > col[i.second])
        {
            cout << i.second << " " << i.first << endl;
        }
        else
        {
            cout << i.first << " " << i.second << endl;
        }
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