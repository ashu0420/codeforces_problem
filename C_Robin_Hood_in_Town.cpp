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
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    int mx = 0;
    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        mx = max(mx, v[i]);
    }
    if (n == 1 || n == 2)
    {
        ct("-1");
        return;
    }
    sort(v.begin(), v.end());
    ll x = v[n / 2];
    x *= 2;
    x *= n;
    ll ans = x - sum;
    ans++;
    if (ans > 0)
    {
        ct(ans);
        return;
    }
    else
    {
        ct("0");
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}