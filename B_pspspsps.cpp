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
    int n;
    cn(n);
    string s;
    cn(s);
    int fs = 0;
    int pk = 0, sk = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'p')
        {
            pk++;
        }
        if (s[i] == 's')
        {
            sk++;
        }
    }
    if (sk == 0 || pk == 0)
    {
        py;
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 's')
        {
            fs = i;
            break;
        }
    }
    for (int i = 0; i < fs; i++)
    {
        if (s[i] == 'p')
        {
            pn;
            return;
        }
    }
    if (sk == 1 && s[0] == 's')
    {
        py;
        return;
    }
    if (pk == 1 && s[n - 1] == 'p')
    {
        py;
        return;
    }
    pn;
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