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
    int n;
    cn(n);
    vin(v, n);
    int ans = 0;
    int c0 = 3, c1 = 1, c2 = 2, c3 = 1, c5 = 1;
    int cnt = 0;
    for (auto i : v)
    {
        cnt++;
        if (i == 0)
        {
            c0--;
        }
        else if (i == 1)
        {
            c1--;
        }
        else if (i == 2)
        {
            c2--;
        }
        else if (i == 3)
        {
            c3--;
        }
        else if (i == 5)
        {
            c5--;
        }
        if (c0 < 1 && c2 < 1 && c1 < 1 && c3 < 1 && c5 < 1)
        {
            ct(cnt);
            return;
        }
    }
    if (c0 < 1 && c2 < 1 && c1 < 1 && c3 < 1 && c5 < 1)
    {
        ct(cnt);
        return;
    }
    ct(0);
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