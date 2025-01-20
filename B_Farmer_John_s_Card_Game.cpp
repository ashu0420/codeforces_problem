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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sort(v[i]);
    }
    vector<pair<int, int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = {v[i][0], i + 1};
    }
    sort(ans);
    for (int i = 0; i < n; i++)
    {
        if (ans[i].first != i)
        {
            ct("-1");
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (v[i][j] - v[i][j-1] != n)
            {
                ct("-1");
                return;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i].second<<" ";
    }
    cout<<endl;
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