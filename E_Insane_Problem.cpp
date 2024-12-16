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
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    ll ans = 0;
    ll temp = 1;
    while (temp <= 1e9)
    {
        ll tans = (min(r1 , r2/temp) - max(l1 , (l2-1+temp)/temp)+1);
        if (tans > 0)
        {
            ans += tans;
        }
        temp *= k;
    }
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