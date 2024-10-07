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
    fr(ll, 0, n) { cout << a[i] << " "; }cout<<endl;

using namespace std;

void solve()
{
    // Your code here
    ll n;
    cn(n);
    vector<pair<ll, ll>> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i].first;
        p[i].second = i;
    }
    sort(p.begin(), p.end());
    vector<ll> pre(n);
    pre[0] = p[0].first;
    fr(ll, 1, n)
    {
        pre[i] = pre[i - 1] + p[i].first;
    }
    vector<ll> ch(n, 0);
    fr(ll, 0, n - 1)
    {
        if (pre[i] >= p[i + 1].first)
        {
            ch[i] = 1;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (ch[i] != 0)
        {
            ch[i] += ch[i + 1];
        }
    }
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ans[p[i].second] = i + ch[i];
    }
    out(ans,n);
    // out(ch,n);
    // out(pre,n);
    // cout<<endl;
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