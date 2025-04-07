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
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vin(a, n);
    sort(a);
    int cnt = 0;
    if (a[0] == a[1])
    {
        py;
        return;
    }
    vector<ll> rem;
    for (int i = 1; i < n; i++)
    {
        if (a[i] % a[0] == 0)
        {
            rem.push_back(a[i] / a[0]);
        }
    }
    if (rem.size() == 0)
    {
        pn;
        return;
    }
    sort(rem);
    ll m = rem[0];
    for (int i = 1; i < rem.size(); i++)
    {
        m = gcd(m, rem[i]);
    }
    if (m == 1)
    {
        py;
    }
    else
    {
        pn;
    }
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