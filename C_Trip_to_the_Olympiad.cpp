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
    ll l, r;
    cin >> l >> r;
    ll tl=l,tr=r;
    vector<int> lbit, rbit;
    while (l > 0)
    {
        lbit.push_back(l % 2);
        l /= 2;
    }
    while (r > 0)
    {
        rbit.push_back(r % 2);
        r /= 2;
    }
    for (int i = lbit.size(); i < rbit.size(); i++)
    {
        lbit.push_back(0);
    }
    reverse(lbit.begin(), lbit.end());
    reverse(rbit.begin(), rbit.end());
    int n = rbit.size();
    vector<int> a, b;
    ll i;
    for (i = 0; i < n; i++)
    {
        if (lbit[i] == rbit[i] )
        {
            a.push_back(lbit[i]);
            b.push_back(rbit[i]);
        }
        else
        {
            a.push_back(1);
            b.push_back(0);
            i++;
            break;
        }
    }
    for (i; i < n; i++)
    {
        a.push_back(0);
        b.push_back(1);
    }
    // out(a, a.size());
    // out(b, b.size());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    ll anum = 0, bnum = 0;
    ll k = 1;
    for (i = 0; i < n; i++)
    {
        anum += (k * a[i]);
        bnum += (k * b[i]);
        // cout << a[i] << " " << b[i] << " " << k;
        // ct("X");
        k *= 2;
    }
    ll c;
    for (ll j = tr; j >= tl; j--)
    {
        // ct(j);
        if (j != anum && j != bnum)
        {
            c = j;
            
            break;
        }
    }
    cout << anum << " " << bnum << " " << c << endl;
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