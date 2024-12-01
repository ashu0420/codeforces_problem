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
    ll n;
    cn(n);
    vector<ll> v(n);
    in(v, n);
    ll curr = v[n - 1];
    ll ans = 0;
    for (ll i = n - 2; i >= 0; i--)
    {
        ans += (v[i] / curr);
        if (v[i] % curr == 0)
        {
            ans--;
            curr = (v[i] / ((v[i] / curr)));
        }
        else
        {
            curr = (v[i] / ((v[i] / curr) + 1));
        }
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