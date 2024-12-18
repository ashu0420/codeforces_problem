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
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    ll sa = 0, sb = 0;
    ll ma = LONG_LONG_MAX, Ma = 0;
    ll mb = LONG_LONG_MAX, Mb = 0;
    for (int i = 0; i < n; i++)
    {
        cn(a[i]);
        sa += a[i];
        ma = min(ma, a[i]);
        Ma = max(Ma, a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cn(b[i]);
        sb += b[i];
        mb = min(mb, b[i]);
        Mb = max(Mb, b[i]);
    }
    if (k == 1)
    {
        sa -= ma;
        sa += max(ma, Mb);
        ct(sa);
        return;
    }
    if (k % 2 == 0)
    {
        if (ma < Mb)
        {
            sa -= ma;
            sa += Mb;
            sa -= max(Mb, Ma);
            sa += min(mb, ma);
        }
        else
        {
            sa-=Ma;
            sa+=mb;
        }
        ct(sa);
        return;
    }
    else
    {
        if (ma < Mb)
        {
            sa -= ma;
            sa += Mb;
            // sa += mb;
        }

        ct(sa);
        return;
    }
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