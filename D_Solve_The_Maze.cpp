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

void feel(vector<vector<char>> &v, int i, int j)
{
    if (v[i - 1][j] == '.')
    {
        v[i - 1][j] = '1';
        feel(v, i - 1, j);
    }
    if (v[i][j - 1] == '.')
    {
        v[i][j - 1] = '1';
        feel(v, i, j - 1);
    }
    if (v[i][j + 1] == '.')
    {
        v[i][j + 1] = '1';
        feel(v, i, j + 1);
    }
    if (v[i + 1][j] == '.')
    {
        v[i + 1][j] = '1';
        feel(v, i + 1, j);
    }

    return;
}
void solve()
{
    // Your code here
    int n;
    int m;
    cin >> n >> m;
    vector<pair<int, int>> good, bad;
    vector<vector<char>> v(n + 2, vector<char>(m + 2));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cn(v[i][j]);
            if (v[i][j] == 'G')
            {
                good.push_back({i, j});
            }
            else if (v[i][j] == 'B')
            {
                bad.push_back({i, j});
            }
        }
    }
    if (good.size() == 0 && (v[n][m] == '.' || v[n][m] == '#'))
    {
        py;

        return;
    }

    for (int i = 0; i < m + 2; i++)
    {
        v[0][i] = '#';
        v[n + 1][i] = '#';
    }
    for (int i = 0; i < n + 2; i++)
    {
        v[i][0] = '#';
        v[i][m + 1] = '#';
    }
    for (auto i : bad)
    {
        if (v[i.first + 1][i.second] == 'G' || v[i.first - 1][i.second] == 'G' || v[i.first][i.second + 1] == 'G' || v[i.first][i.second - 1] == 'G')
        {
            pn;
            return;
        }
        if (v[i.first + 1][i.second] == '.')
        {
            v[i.first + 1][i.second] = '#';
        }
        if (v[i.first - 1][i.second] == '.')
        {
            v[i.first - 1][i.second] = '#';
        }
        if (v[i.first][i.second + 1] == '.')
        {
            v[i.first][i.second + 1] = '#';
        }
        if (v[i.first][i.second - 1] == '.')
        {
            v[i.first][i.second - 1] = '#';
        }
    }
    // if (v[n][m] == '.')
    //     v[n][m] = '1';
    // // ct(v[n][m]);
    // feel(v, n, m);
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }
    ll dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool vis[n + 5][m + 5];
    memset(vis, false, sizeof(vis));
    queue<pair<int, int>> q;
    if (v[n][m] == '.')
    {
        q.push({n, m});
        vis[n][m] = true;
    }
    while (!q.empty())
    {
        pair curr = q.front();
        q.pop();
        for (ll k = 0; k < 4; k++)
        {
            ll ni = curr.first + dir[k][0];
            ll nj = curr.second + dir[k][1];
            if (!vis[ni][nj] && v[ni][nj] != '#')
            {
                q.push({ni, nj});
                vis[ni][nj] = true;
            }
        }
    }
    bool g = true;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            if ((v[i][j] == 'G' && !vis[i][j]) or
                (v[i][j] == 'B' && vis[i][j]))
            {
                g = false;
                break;
            }
        }
    }
    cout << (g ? "Yes" : "No") << endl;
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