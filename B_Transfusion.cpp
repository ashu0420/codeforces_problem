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
    cn(n);
    vector<int> v(n);
    ll tsum = 0, osum = 0, esum = 0;
    ll o = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        tsum += v[i];
        if (i % 2)
        {
            osum += v[i];
            o++;
        }
        else
        {
            esum += v[i];
            e++;
        }
    }
    // ct(tsum);
    // ct(osum);
    // ct(esum);
    if (tsum % n != 0)
    {
        pn;
        return;
    }
    ll c = tsum / n;
    if (osum % o != 0 || esum % e != 0)
    {
        pn;
        // ct("k");
        return;
    }
    ll co = osum / o;
    ll ce = esum / e;
    if (co != c || ce != c)
    {
        pn;
        return;
    }
    py;
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