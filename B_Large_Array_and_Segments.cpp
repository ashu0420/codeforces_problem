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
    ll n, k, x;
    cin >> n >> k >> x;
    vin(a, n);
    ll tot = 0;
    ll cnt = 0;
    for (auto i : a)
    {
        tot += i;
    }
    // while (x >= tot && cnt <= n * k)
    // {
    //     x -= tot;
    //     cnt += n;
    // }
    cnt = x / tot;
    cnt *= n;
    x %= tot;
    while (x > 0 && cnt <= n * k)
    {
        for (int i = n - 1; cnt <= n * k && x > 0 && i >= 0; i--)
        {
            cnt++;
            // ct(x);
            x -= a[i];
        }
    }
    // ct(cnt);
    ll ans = n * k - cnt;

    ct(max(ans + 1, 0LL));
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