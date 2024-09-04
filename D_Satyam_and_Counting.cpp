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
    li n;
    cn(n);
    li xm = 0;
    map<li, int> y0, y1;
    fr(li, 0, n)
    {
        li x, y;
        cin >> x >> y;
        xm = max(x, xm);
        if (y == 0)
        {
            y0[x]++;
        }
        else
        {
            y1[x]++;
        }
    }
    ll count = 0;
    fr(li, 0, xm + 1)
    {
        if (y0[i] > 0 && y1[i] > 0)
        {
            count += n;
            count-=2;
        }
        if (xm > i + 1)
        {
            if (y0[i] > 0 && y0[i + 2] > 0 && y1[i + 1] > 0)
            {
                count++;
            }
            if (y1[i] > 0 && y1[i + 2] > 0 && y0[i + 1] > 0)
            {
                count++;
            }
        }
    }
    ct(count);
    return;
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