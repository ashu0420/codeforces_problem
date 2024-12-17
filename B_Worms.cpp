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
    int n;
    cin >> n;
    vector<int> v(n);
    // in(v,n);
    ll tot = 0;
    vector<ll> pre(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        tot += v[i];
        pre[i] = tot;
    }
    unordered_map<ll, ll> mp;
    int j = 0;
    for (int i = 1; i <= tot; i++)
    {
        if (i <= pre[j])
        {
            mp[i] = j;
        }
        else
        {
            j++;
            mp[i] = j;
        }
        // cout<<i<<" "<<mp[i]+1<<endl;
    }
    int q;
    cn(q);
    while(q--)
    {
        int m;
        cn(m);
        ct(mp[m]+1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}