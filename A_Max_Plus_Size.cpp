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
    int n;
    cn(n);
    vector<int> v(n);
    in(v, n);
    if (n % 2 == 0)
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x = max(x, v[i]);
        }
        ct(x + (n / 2));
    }
    else
    {
        int x = 0, y = 0;
        for (int i = 0; i < n; i += 2)
        {
            x = max(x, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            y = max(y, v[i]);
        }
        int ans = max(x + ((n + 1) / 2), y + (n / 2));
        ct(ans);
        return;
    }
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