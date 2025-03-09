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
vector<vector<int>> ad(200001);
vector<int> vis(200001, 0);
vector<vector<int>> ans;
vector<int> temp;
void dfs(int node)
{
    vis[node] = 1;
    temp.push_back(node);
    int c = -1;
    for (auto i : ad[node])
    {
        if (vis[i] == 0)
        {
            dfs(i);
            // c++;
        }
    }
    if (temp.size() > 0)
    {
        ans.push_back(temp);
        temp.clear();
    }
    return;
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
    }

    ans.clear();
    temp.clear();
    int root;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cn(x);
        if (x == i)
        {
            root = x;
        }
        else
        {
            ad[i].push_back(x);
            ad[x].push_back(i);
        }
    }
    dfs(root);
    ct(ans.size());
    for (auto i : ans)
    {
        ct(i.size());
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
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