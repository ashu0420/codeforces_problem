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
    int l, r;
    cin >> l >> r;
    if (r - l > 100 )
    {
        if (l % 100 < 90)
            ct(l - (l % 100) + 90);
        else
            ct(l - (l % 100) + 190);
    }
    else
    {
        int max_luck = 0;
        li num = l;

        fr(li, l, r + 1)
        {
            li low = LONG_MAX;
            li high = 0;
            li curr = i;
            while (curr != 0)
            {
                low = min(low, curr % 10);
                high = max(high, curr % 10);
                curr = curr / 10;
            }
            if (abs(high - low) > max_luck)
            {
                max_luck = high - low;
                num = i;
            }
        }
        ct(num);
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