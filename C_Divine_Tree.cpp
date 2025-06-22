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
    ll n, m;
    cin >> n >> m;
    ll tn = n;
    vector<ll> a;
    ll r = n * (n + 1) / 2;
    vector<ll> d(n + 1, 0);
    if (m < n || m > r)
    {
        ct(-1);
        return;
    }
    while (m > 0)
    {
        if (m - n == n - 1)
        {
            a.push_back(n);
            d[n] = 1;
            if (d[1] == 0)
                a.push_back(1);
            d[1] = 1;
            for (int i = 1; i <= n; i++)
            {
                if (d[i] == 0)
                {
                    a.push_back(i);
                }
            }

            break;
        }
        else if (m - n > n - 1)
        {
            a.push_back(n);
            d[n] = 1;
            m -= n;
            n--;
        }
        else
        {
            a.push_back(m - (n - 1));
            d[m - (n - 1)] = 1;
            if (d[1] == 0)
                a.push_back(1);
            d[1] = 1;
            for (int i = 1; i <= n; i++)
            {
                if (d[i] == 0)
                {
                    a.push_back(i);
                }
            }
            break;
        }
    }
    ct(a[0]);
    for (int i = 0; i < a.size() - 1; i++)
    {
        cout << a[i] << " " << a[i + 1] << endl;
    }
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