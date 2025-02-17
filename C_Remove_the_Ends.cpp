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
    ll n;
    cn(n);
    vin(a, n);
    vector<ll> pr(n), sf(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
        }
        pr[i] = sum;
    }
    sum=0;
    for (ll i = n-1; i >=0; i--)
    {
        if (a[i] < 0)
        {
            sum += abs(a[i]);
        }
        sf[i] = sum;
    }
    ll ans=0;
    // out(pr,n);
    for(int i=0;i<n;i++)
    {
        ans=max(ans,pr[i]+sf[i]);
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