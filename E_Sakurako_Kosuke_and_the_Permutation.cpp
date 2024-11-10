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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> vis(n + 1, 0);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int cnt = 0;
        while (vis[temp]==0)
        {
            cnt++;
            vis[temp] = 1;
            temp = v[temp];
        }
        ans+=(cnt-1)/2;
    }
    ct(ans);

    // out(v,n+1);
    // vector<int> status(n + 1);
    // for (int i = 1; i <= n; i++)
    // {

    //     if (v[i] == i || v[v[i]] == i)
    //     {
    //         status[i] = 1;
    //     }
    // }
    // int ans = 0;
    // unordered_map<int, int> ind;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (status[i] != 1)
    //     {
    //         ind[v[i]] = i;
    //     }
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     if (!(v[i] == i || v[v[i]] == i))
    //     {
    //         swap(v[v[i]], v[ind[i]]);
    //         swap(ind[v[v[i]]], ind[v[ind[i]]]);
    //         ans++;
    //     }
    //     // out(v, n + 1);
    //     // ct(ans);
    // }
    // ct(ans);
    return;
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