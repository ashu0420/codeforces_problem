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
    vector<int> v(n);
    in(v, n);
    int ans = 0;

    // if (v[0] == v[1])
    // {
    //     swap(v[0], v[n - 1]);
    // }
    for (int i = 0; i < n; i++)
    {
        int cs = 0;
        int as = 0;
        if (v[i] == v[n - 1 - i])
        {
            continue;
        }
        if (v[i] == v[i - 1] && i > 0)
        {
            cs++;
        }

        if (v[n - 1 - i] == v[n - i] && i > 0)
        {
            cs++;
        }

        if (v[i] == v[n - i] && i > 0)
        {
            as++;
        }
        if (v[n - 1 - i] == v[i - 1] && i > 0)
        {
            as++;
        }
        if (cs > as)
        {
            swap(v[i], v[n - 1 - i]);
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            ans++;
        }
    }
    // if (v[0] == v[1])
    // {
    //     swap(v[0], v[n - 1]);
    // }

    // if (v[n - 2] == v[n - 1])
    // {
    //     swap(v[0], v[n - 1]);
    // }
    // int xans = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (v[i] == v[i + 1])
    //     {
    //         xans++;
    //     }
    // }
    // // out(v,n);
    // ans = min(xans, ans);
    // if (n % 2 == 0)
    // {
    //     // ct("hi");
    //     swap(v[n / 2], v[(n / 2) - 1]);
    //     int csx = 0;
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         if (v[i] == v[i + 1])
    //         {
    //             csx++;
    //         }
    //     }
    //     // out(v,n);
    //     ans = min(csx, ans);
    // }
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