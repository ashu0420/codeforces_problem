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

const int N = 500000;
// vector<int> v(N + 1);
using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vector<vector<int>> ad(n);
    vector<pair<int, int>> deg(n);
    map<pair<int, int>, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        ad[u].push_back(v);
        ad[v].push_back(u);
        deg[u].first++;
        deg[v].first++;
        mp[{u, v}]++;
        mp[{v, u}]++;
    }
    for (int i = 0; i < n; i++)
    {
        deg[i].second = i;
    }
    sort(deg);
    reverse(deg.begin(), deg.end());
    int ans = 0;
    for (int i = 0; i < min(n, 5); i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (mp[{deg[i].second, deg[j].second}] > 0)
                {
                    temp = deg[i].first + deg[j].first - 2;
                    // ct("j");
                }
                else
                {
                    temp = deg[i].first + deg[j].first - 1;
                }
                // ct(deg[i].second);
                // ct(deg[j].second);
                // ct(temp);
                // cout<<endl;
            }
        ans = max(ans, temp);
        }
    }
    ct(ans);
    return;
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