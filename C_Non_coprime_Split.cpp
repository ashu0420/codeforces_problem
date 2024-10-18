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
    if (l != r)
    {
        if (r > 3)
        {
            if (r % 2 == 0)
            {
                cout << "2 " << r - 2 << endl;
                return;
            }
            else
            {
                cout << "2 " << r - 3 << endl;
                return;
            }
        }
        else
        {
            ct("-1");
            return;
        }
    }
    else
    {
        if (r > 3)
        {
            if (l % 2 == 0)
            {
                cout << "2 " << l - 2 << endl;
                return;
            }
            else
            {
                int k = sqrt(l);
                for (int i = 3; i <= k; i += 2)
                {
                    if (l % i == 0)
                    {
                        cout << (l / i) << " " << l - (l / i) << endl;
                        return;
                    }
                }
            }
        }
        ct("-1");
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