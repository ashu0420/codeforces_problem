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

void solve()
{
    // Your code here
    int n;
    cn(n);
    vector<string> v(n);
    for (auto &i : v)
    {
        cn(i);
    }
    queue<pair<int, int>> q;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        if (v[i][n - 1] == '1')
        {
            q.push({i, n - 1});
            vis[i][n - 1] = 1;
        }
        if (v[n - 1][i] == '1')
        {
            q.push({n - 1, i});
            vis[n - 1][i] = 1;
        }
    }
    while (!q.empty())
    {
        auto [a, b] = q.front();
        q.pop();
        if (b - 1 >= 0 && vis[a][b - 1] == 0 && v[a][b - 1] == '1')
        {
            q.push({a, b - 1});
            vis[a][b - 1] = 1;
        }
        if (a - 1 >= 0 && vis[a - 1][b] == 0 && v[a - 1][b] == '1')
        {
            q.push({a - 1, b});
            vis[a - 1][b] = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][j]=='1'&&vis[i][j]==0)
            {
                pn;
                return;
            }
        }
    }
    py;
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