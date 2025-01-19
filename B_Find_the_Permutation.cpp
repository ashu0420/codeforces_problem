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
// #define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vector<pair<int, int>> vp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        string s;
        cn(s);
        int cnt = 0;
        for (int j = i; j <= n; j++)
        {
            if (s[j] == '1')
            {
                cnt++;
                // ct(s[j]);
            }
        }
        // ct(s);
        vp[i].first = i;
        vp[i].second = cnt;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<vp[i].second<<" ";
    // }
    // ct("");
    vector<int> ans(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        int c = 0;
        for (int j = 1; j <= n; j++)
        {
            if (ans[j] == -1)
            {
                c++;
            }
            if (c == vp[i].second + 1)
            {
                ans[j] = i;
                break;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    out(ans, n );
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