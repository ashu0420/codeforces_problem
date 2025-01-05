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
    vin(v, n);
    sort(v);
    vector<ll> count;
    ll curr = v[0];
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        if (curr == v[i])
        {
            c++;
        }
        else
        {
            count.push_back(c);
            curr = v[i];
            c = 1;
        }
    }
    count.push_back(c);
    sort(count);
    // out(count,count.size());
    int i = 0;
    int temp = 0;
    int d = 0;
    for (i; i < count.size(); i++)
    {
        temp += count[i];
        if (temp <= k)
        {
            d++;
        }
        else
        {
            break;
        }
    }
    if (count.size() == d)
    {
        ct(count.size() - d + 1);
        return;
    }
    ct(count.size() - d);
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