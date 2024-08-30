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
    if (n % 2 == 0)
    {
        ct("-1");
        return;
    }
    li k = n;
    bool flag = 0;
    for (li i = 0; i < n; i++)
    {
        if (k == 1)
        {
            flag = 1;
            cout << k << " ";
            k++;
            continue;
        }
        if (flag == 0)
        {
            cout << k << " ";
            k -= 2;
        }
        if (flag == 1)
        {
            cout << k << " ";
            k += 2;
        }
    }
    cout << endl;
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
}