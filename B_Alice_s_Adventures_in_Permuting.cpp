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
    ll n, b, c;
    cin >> n >> b >> c;
    ll i = 0;
    if (b != 0)
    {
        i = (n + b - c - 1) / b;
       
        ct(min(n,n - i));
    }
    else
    {
        if (c + 2 < n)
        {
            ct("-1");
            return;
        }
        if (c < n)
        {
            ct(n - 1);
        }
        else
        {
            ct(n);
        }
    }
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