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
    ll n, k;
    cn(n);
    cn(k);
    vector<ll> v(n);
    in(v, n);
    sort(v.begin(), v.end());
    ll count = 0;
    ll curr = 0;
    ll ch = 0;
    ll i;
    for ( i = 0; i < n; i++)
    {
        if (k > (v[i] - ch) * (n - i))
        {
            k -= 1LL*(v[i] - ch) * (n - i);
            count += 1LL*(v[i] - ch) * (n - i);
            ch+=(v[i]-ch);
        }
        else
        {
            count += k;
            break;
        }
    }
    ct(count+i);
    return;
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