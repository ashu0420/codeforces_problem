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
    ll n, m;
    cin >> n >> m;
    vin(a, m);
    sort(a);
    for (int i = 0; i < m; i++)
    {
        if (a[i] >= n)
        {
            a[i] = n - 1;
        }
    }
    // reverse(a.begin(), a.end());
    vector<ll> pre(m + 1, 0);
    pre[0] = 0;
    ll sum = 0;
    for (ll i = 0; i < m; i++)
    {
        pre[i + 1] = pre[i] + a[i];
    }
    ll ans = 0;
    ll i = 0, j = m - 1;
    // out(pre, m + 1);
    while (i < j)
    {
        if (a[i] + a[j] >= n)
        {
            j--;
        }
        else
        {
            ans += (min({(m - j - 1) * a[i], pre[m] - pre[j + 1] + (m - j - 1) * (a[i] - n + 1), (m - j - 1) * (n - 1)})) > 0 ? min({(m - j - 1) * a[i], pre[m] - pre[j + 1] + (m - j - 1) * (a[i] - n + 1), (m - j - 1) * (n - 1)}) : 0;
            // ct(i);
            // // ct(j);
            // ct(min({(m - j - 1) * a[i], pre[m] - pre[j + 1] + (m - j - 1) * (a[i] - n + 1), (m - j - 1) * (n - 1)}));

            i++;
        }
    }
    for (i; i < m - 1; i++)
    {
        ans += (min((m - i - 1) * a[i], pre[m] - pre[i + 1] + (m - i - 1) * (a[i] - n + 1))) > 0 ? min((m - i - 1) * a[i], pre[m] - pre[i + 1] + (m - i - 1) * (a[i] - n + 1)) : 0;
        // ct(i);
        // ct(min((m - i - 1) * a[i], pre[m] - pre[i + 1] + (m - i - 1) * (a[i] - n + 1)));
    }
    ans *= 2;
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