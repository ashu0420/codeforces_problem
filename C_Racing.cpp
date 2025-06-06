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
#define in1(a, n) \
    fr(ll, 1, n + 1) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define out1(a, n)                            \
    fr(ll, 1, n + 1) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define srt(a) sort(a.begin(), a.end());
#define rev(a) reverse(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
#define vin1(a, n)       \
    vector<ll> a(n + 1); \
    in1(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vin1(a, n);
    vector<pair<int, int>> vp(n + 1);
    vp[0].first = 0;
    vp[0].second = 0;
    int l = 0, r = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> vp[i].first >> vp[i].second;
    }
    for (int i = 1; i <= n; i++)
    {

        if (a[i] == 0)
        {
            l = vp[i].first = max(l, vp[i].first);
            r = vp[i].second = min(vp[i].second, r);
        }
        else if (a[i] == 1)
        {
            r++;
            l++;
            l = vp[i].first = max(l, vp[i].first);
            r = vp[i].second = min(vp[i].second, r);
        }
        else
        {
            r++;
            l = vp[i].first = max(l, vp[i].first);
            r = vp[i].second = min(vp[i].second, r);
        }
        // cout << l << " " << r << endl;
        if (l > r)
        {
            ct(-1);
            return;
        }
    }
    for (int i = n; i > 0; i--)
    {
        if (a[i] == -1)
        {
            if (r > vp[i - 1].second)
            {
                a[i] = 1;
            }
            else
            {
                a[i] = 0;
            }
        }
        if (a[i] == 1)
        {
            r--;
        }
    }
    out1(a, n);
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