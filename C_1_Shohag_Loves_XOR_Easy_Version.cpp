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
    ll x, m;
    cin >> x >> m;
    int count = 0;
    ll k = log2(x);
    ll mn = pow(2, k + 1);
    for (ll i = 1; i <= min(mn,m); i++)
    {
        if (x != i)
        {
            ll b = x ^ i;
            if (x % b == 0 || i % b == 0)
            {
                count++;
            }
        }
        // ll b = x ^ i;
        // cout << b << " ";
    }
    ct(count);
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