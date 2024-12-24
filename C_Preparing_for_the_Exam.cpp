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
    int n, m, k;
    cin >> n >> m >> k;
    vin(a, m);
    vin(q, k);
    string ans = "";
    if (k < n - 1)
    {
        for (int i = 0; i < m; i++)
        {
            ans += '0';
        }
    }
    else if (k == n)
    {
        for (int i = 0; i < m; i++)
        {
            ans += '1';
        }
    }
    else
    {
        // sort(q);
        ll uq = n;
        for (int i = 0; i < k; i++)
        {
            if (q[i] != i + 1)
            {
                uq = i + 1;
                break;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (a[i] == uq)
                ans += '1';
            else
                ans += '0';
        }
        // ct(uq);
    }
    ct(ans);
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