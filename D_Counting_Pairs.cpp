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
    ll n, x, y;
    cin >> n >> x >> y;
    vin(a, n);
    sort(a);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    vector<ll> remx(n);
    vector<ll> remy(n);
    for (int i = 0; i < n; i++)
    {
        remx[i] = sum - a[i] - x;
        remy[i] = sum - a[i] - y;
    }
    ll ans = 0;
    auto it = a.begin();
    for (int i = 0; i < n - 1; i++)
    {
        auto itx = lower_bound(a.begin()+i+1, a.end(), remy[i]);
        auto ity = upper_bound(a.begin()+i+1, a.end(), remx[i]);
        ll temp = (distance(max(it, itx), ity));
        // cout << *itx << " " << *ity << " " << temp << endl;

        if (temp > 0)
        {
            ans += temp;
        }

        // ll temp;
        // for (int j = i + 1; j < n; j++)
        // {
        //     temp = sum - (a[i] + a[j]);
        //     if (temp >= x && temp <= y)
        //     {
        //         ans++;
        //     }
        // }
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}