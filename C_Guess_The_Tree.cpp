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
    li n;
    cn(n);
    vector<li> v(n);
    in(v, n);
    // ct(n);
    // out(v,n);
    vector<bool> check(n + 1, 0);
    li x;

    check[v[0]] = 1;
    for (li i = 1; i < n; i++)
    {
        x = v[i];

        if (x == 1)
        {
            if (check[x + 1] != 1)
            {
                pn;
                return;
            }
            else
                check[x] = 1;
        }
        else if (x == n)
        {
            if (check[x - 1] != 1)
            {
                pn;
                return;
            }
            else
                check[x] = 1;
        }
        else
        {
            if (check[x - 1] != 1 && check[x + 1] != 1)
            {
                pn;
                return;
            }
            check[x] = 1;
        }
    }
    py;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
