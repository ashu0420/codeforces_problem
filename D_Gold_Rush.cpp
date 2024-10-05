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

bool flag(int x, int m)
{
    if (m == x)
    {

        return 1;
    }
    if (m > x)
    {
        return 0;
    }
    if (x % 3 != 0)
    {
        return 0;
    }
    x /= 3;
    return flag(x, m) || flag(2 * x, m);
}

void solve()
{
    // Your code here
    int n, m;
    cin >> n >> m;

    // if (n % 3 != 0 && n > 3)
    // {
    //     pn;
    //     return;
    // }
    if (n < m)
    {
        pn;
        return;
    }

    flag(n, m) ? py : pn;
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