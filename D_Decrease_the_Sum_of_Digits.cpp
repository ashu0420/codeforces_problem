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
    string n;
    int s;
    cin >> n >> s;
    int i = 0;
    int cnt = 0;
    for (auto i : n)
    {
        cnt += (i - '0');
    }
    if (cnt == s)
    {
        ct(0);
        return;
    }
    cnt = 0;
    for (i; i < n.size(); i++)
    {
        if (cnt + n[i] - '0' >= s)
        {
            break;
        }
        else
        {
            cnt += (n[i] - '0');
        }
    }
    int k = 0;
    int c = 0;
    ll ans = 0;
    ll tens = 1;
    for (int j = n.size() - 1; j >= i; j--)
    {
        int r = n[j] - '0';
        r = k - r;
        // ct(r);
        if (r < 0)
        {
            ans += ((10 + r) * tens);
            k = c - 1;
        }
        else
        {
            ans += (r * tens);
        }
        tens *= 10;
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