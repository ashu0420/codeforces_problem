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
    int n;
    cn(n);
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            if (v[i][j] == 1)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if (c > 0)
        {
            ans.push_back(c);
        }
    }
    ans.push_back(0);
    sort(ans);
    // out(ans, ans.size());
    int l = 0;
    for (auto i : ans)
    {
        if (l <= i)
        {
            l++;
        } // ct(i);
    }
    ct(min(n, l));
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