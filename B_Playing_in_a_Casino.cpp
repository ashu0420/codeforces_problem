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
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }

using namespace std;

void solve()
{
    // Your code here
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    ll count = 0;
    for (int i = 0; i < m; i++)
    {
        int k = n - 1;
        for (int j = 0; j < n; j++)
        {
            count +=k*1LL*v[i][j];
            // ct(k);
            k-=2;
        }
    }
    // for (int k = 0; k < n - 1; k++)
    // {
    //     for (int i = k + 1; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             count += abs(v[i][j] - v[k][j]);
    //         }
    //     }
    // }
    ct(-1*(count));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}