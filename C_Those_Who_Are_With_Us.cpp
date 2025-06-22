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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            mx = max(mx, v[i][j]);
        }
    }
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == mx)
            {
                vp.push_back({i, j});
            }
        }
    }
    if (vp.size() == 1)
    {
        ct(mx - 1);
        return;
    }

    // srt(vp);
    vector<int>
        r(n, 0);
    for (auto i : vp)
    {
        r[i.first]++;
    }
    // out(r,n);
    int rx = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i] > r[rx])
        {
            rx = i;
        }
        if (r[i] > 1)
        {
            cnt++;
        }
    }
    if (cnt > 1)
    {
        ct(mx);
        return;
    }
    // ct(rx);
    if (cnt)
    {
        set<int> s;
        for (auto i : vp)
        {
            if (i.first != rx)
            {
                s.insert(i.second);
            }
        }
        if (s.size() > 1)
        {
            ct(mx);
            // X;
        }
        else
        {
            ct(mx - 1);
        }
        return;
    }
    vector<int> c;
    for(auto i:vp)
    {
        c.push_back(i.second);
    }
    srt(c);
    if(c[0]==c[c.size()-2]||c[1]==c[c.size()-1])
    {
        ct(mx-1);
    }
    else
    {
        ct(mx);
    }
    // srt(r);
    // if (r[n - 2] > 1)
    // {
    //     ct(mx);
    //     return;
    // }
    
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