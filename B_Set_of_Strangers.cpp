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

void solve()
{
    // Your code here
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            s.insert(v[i][j]);
        }
    }
    vector<int> fq((n * m) + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j + 1 < m && v[i][j + 1] == v[i][j])
            {
                fq[v[i][j]] = 2;
            }
            if (j - 1 > -1 && v[i][j - 1] == v[i][j])
            {
                fq[v[i][j]] = 2;
            }
            if (i + 1 < n && v[i + 1][j] == v[i][j])
            {
                fq[v[i][j]] = 2;
            }
            if (i - 1 > -1 && v[i - 1][j] == v[i][j])
            {
                fq[v[i][j]] = 2;
            }
        }
    }

    for (auto i : s)
    {
        if (fq[i] == 0)
        {
            fq[i] = 1;
        }
    }
    sort(fq);

    ll ans = 0;
    for (int i = 1; i < (n * m); i++)
    {
        ans += fq[i];
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