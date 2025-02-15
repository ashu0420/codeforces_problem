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
    ll n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    vector<ll> p(n + 1), a(n + 1);
    fr(ll, 1, n + 1)
    {
        cn(p[i]);
    }
    fr(ll, 1, n + 1)
    {
        cn(a[i]);
    }
    // out(p, n + 1);
    // ct(k);
    vector<ll> bo, sa;
    for (ll i = 0; i < min(n, k); i++)
    {
        bo.push_back(a[pb]);
        pb = p[pb];
    }
    for (ll i = 0; i < min(n, k); i++)
    {
        sa.push_back(a[ps]);
        ps = p[ps];
    }
    ll crb = 0;
    ll mxb = 0;
    for (ll i = 0; i < bo.size(); i++)
    {
        if (mxb < bo[i])
        {
            mxb = bo[i];
            crb = i;
        }
    }
    ll crs = 0;
    ll mxs = 0;
    for (ll i = 0; i < sa.size(); i++)
    {
        if (mxs < sa[i])
        {
            mxs = sa[i];
            crs = i;
        }
    }
    vector<ll> preb(crb + 1, 0);
    vector<ll> pres(crs + 1, 0);
    ll as = 0, ab = 0;
    for (ll i = 1; i < crb + 1; i++)
    {
        preb[i] += preb[i - 1] + bo[i - 1];
    }
    for (ll i = 1; i < crs + 1; i++)
    {
        pres[i] += pres[i - 1] + sa[i - 1];
    }
    for (int i = 0; i < crb +1; i++)
    {
        ll temp = 0;
        temp = preb[i] + bo[i] * (k - i);
        ab = max(ab, temp);

    }

    for (int i = 0; i < crs+1; i++)
    {
        ll temp = 0;
        temp = pres[i] + sa[i] * (k - i);
        as = max(as, temp);
    }
 
    if (as > ab)
    {
        ct("Sasha");
    }
    else if (as < ab)
    {
        ct("Bodya");
    }
    else
    {
        ct("Draw");
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