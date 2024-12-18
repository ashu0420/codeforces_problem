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
    ll n, m;
    cin >> n >> m;
    ll tn = n;
    ll tm = m;
    while (tm % 2 == 0)
    {
        tm/=2;
    }
    if(tn%tm!=0)
    {
        ct("-1");
        return;
    }
    ll ans = 0;
    while (n % m != 0)
    {
        n %= m;
        ans += (n);
        n *= 2;
    }
    ct(ans);
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}