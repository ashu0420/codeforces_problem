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
    int n, x, k;
    cin >> n >> k >> x;
    vector<ll> v(n);
    ll sum = 0;
    vector<ll> pre(n);
    in(v, n);
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        sum += v[i];
        pre[i] = sum;
    }
    // out(pre,n);
    ll diff = 0;
    ll ans = 0;
    if (n - 1 - x >= 0)
    {
        diff = pre[n - 1] - pre[n - 1 - x];
        ans = pre[n - 1 - x] - diff;
    }
    else
    {
        diff = pre[n - 1];
        ans = -diff;
    }
    // ct(diff);
    // ct(ans);
    for (int i = 1; i <= k; i++)
    {
        if (n - 1 - i - x >= 0)
        {
            diff -= v[n - i];
            diff += v[n - i - x];
            ans = max(pre[n - 1 - i - x] - diff, ans);
        }
        else
        {
            if(n-i-1>=0)
            diff=pre[n-i-1];
            else
            diff=0;
            ans = max(-diff, ans);
        }
        // ct(diff);
        // ct(ans);
    }
    ct(ans);
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