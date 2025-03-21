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
    ll n, m, k;
    string s;
    cin >> n >> m >> k >> s;
    ll ans = 0;
    ll curr = 0;
    for (int i = 0; i < n;)
    {
        if (s[i] == '0' && curr == m - 1)
        {
            ans++;
            i += k;
            curr = 0;
        }
        else if (s[i] == '0' && curr < m - 1)
        {
            curr++;
            i++;
        }
        else
        {
            curr = 0;
            i++;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}