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

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vector<vector<int>> v(n, vector<int>(n));
    fr(int, 0, n)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    int k = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        k = 0;
        while (i + k < n)
        {
            if (v[k][i + k] < 0)
            {
                curr = max(curr, abs(v[k][i + k]));
            }
            k++;
        }
        ans += curr;
    }
    for (int i = 1; i < n; i++)
    {
        int curr = 0;
        k = 0;
        while (i + k < n)
        {
            if (v[i + k][k] < 0)
            {
                curr = max(curr, abs(v[k + i][k]));
            }
            k++;
        }
        ans += curr;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}