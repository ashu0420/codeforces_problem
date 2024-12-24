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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> full;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        full.push_back(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        full.push_back(b[i]);
        full.push_back(b[i] - 1);
    }
    sort(a);
    sort(b);
    sort(full);
    auto last = unique(full.begin(), full.end());
    full.erase(last, full.end());

    // out(full,full.size());
    ll ans = LONG_LONG_MIN;
    for (int i = 0; i <full.size(); i++)
    {
        ll ppl = distance(lower_bound(b.begin(), b.end(), full[i]), b.end());
        // ll ppl = distance(lower_bound(b.begin(), b.end(), full[i]), b.end());
        ll npl = distance(a.begin(), lower_bound(a.begin(), a.end(), full[i]))-(n-ppl);
        // cout<<ppl<<" "<<npl<<endl;
        if (npl <= k)
        {
            // ct("j");
            ans = max(ans, (ppl * full[i]));
        }
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