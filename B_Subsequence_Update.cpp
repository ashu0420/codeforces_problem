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
    ll n, r, l;
    cin >> n >> l >> r;
    vin(a, n);
    // sort(a);
    ll sum = 0;
    ll psum = 0;
    ll ssum = 0;
    for (ll i = l - 1; i < r; i++)
    {
        sum += a[i];
    }
    vector<ll> prev;
    vector<ll> suffv;
    for (ll i = 0; i < r; i++)
    {
        prev.push_back(a[i]);
    }
    for (ll i = l - 1; i < n; i++)
    {
        suffv.push_back(a[i]);
    }
    sort(prev);
    sort(suffv);
    for (ll i = 0; i < r - l + 1; i++)
    {
        psum += prev[i];
    }
    for (ll i = 0; i < r - l + 1; i++)
    {
        ssum += suffv[i];
    }
    sum=min(sum,min(ssum,psum));
    ct(sum);
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