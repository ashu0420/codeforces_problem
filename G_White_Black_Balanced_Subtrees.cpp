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
vector<vector<int>> ad(40001);
vector<int> vis(4001, 0);
vector<pair<int, int>> col(4001);
string s;
pair<int, int> dfs(int node)
{
    vis[node] = 1;
    for (auto i : ad[node])
    {
        if (vis[i] == 0)
        {
            auto k = dfs(i);
            col[node].first += k.first;
            col[node].second += k.second;
            // if (s[i - 1] == 'W')
            // {
            //     col[node].first += 1+k.first;
            // }
            // else
            // {
            //     col[node].second += 1+k.second;
            // }
        }
    }
    if (s[node - 1] == 'W')
    {
        col[node].first += 1;
    }
    else
    {
        col[node].second += 1;
    }
    return col[node];
}
void solve()
{
    // Your code here
    int n;
    cn(n);
    for(int i=0;i<n+1;i++)
    {
        ad[i].clear();
        vis[i]=0;
        col[i]={0,0};
    }
    for (int i = 0; i < n - 1; i++)
    {
        int u;
        cn(u);
        ad[u].push_back(i + 2);
        ad[i + 2].push_back(u);
    }
    cn(s);
    int ans=0;
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        if(col[i].first==col[i].second)
        {
            ans++;
        }
        // cout<<col[i].first<<" "<<col[i].second<<endl;
    }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}