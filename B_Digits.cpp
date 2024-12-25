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
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    ll n, d;
    cin >> n >> d;
    vector<ll> mp(10);
    mp[d]++;
    if (n > 2)
    {
        mp[3]++;
        mp[7]++;
        if (d == 3 || d == 6)
        {
            mp[9]++;
        }
    }
    if (d == 6||d==9)
    {
        mp[3]++;
    }
    if (n > 5)
    {
        mp[9]++;
    }
    mp[1]++;
    for (int i = 1; i < 10; i += 2)
    {
        if (mp[i] > 0)
            cout << i << " ";
    }
    cout << endl;
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