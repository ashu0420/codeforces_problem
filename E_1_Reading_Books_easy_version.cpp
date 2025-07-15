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

ll mod_pow(ll x, ll y)
{
    ll result = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return result;
}

ll modular_inverse(ll denom)
{
    return mod_pow(denom, MOD - 2);
}

void solve()
{
    // Your code here
    int n, k;
    cin >> n >> k;
    vector<int> v11, v01, v10;
    for (int i = 0; i < n; i++)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (a == 1 && b == 1)
        {
            v11.push_back(t);
        }
        else if (a == 1 && b == 0)
        {
            v10.push_back(t);
        }
        else if (a == 0 && b == 1)
        {
            v01.push_back(t);
        }
    }
    int am = 0;
    int ak = 0, bk = 0;
    int i = 0, j = 0;
    srt(v11);
    srt(v01);
    srt(v10);
    while (ak < k && bk < k && i < v11.size() && j < v01.size() && j < v10.size())
    {
        if (v11[i] <= v10[j] + v01[j])
        {
            am += v11[i];
            i++;
        }
        else
        {
            am += v01[j] + v10[j];
            j++;
        }
        ak++;
        bk++;
    }
    if (ak == k)
    {
        ct(am);
        return;
    }
    if (i == v11.size())
    {
        while (ak < k && bk < k && j < v01.size() && j < v10.size())
        {
            am += v01[j] + v10[j];
            j++;
            ak++;
            bk++;
        }
        if (ak == k)
        {
            ct(am);
            return;
        }
        else
        {
            ct(-1);
            return;
        }
    }
    else
    {
        while (ak < k && bk < k && i < v11.size())
        {

            am += v11[i];
            i++;
            ak++;
            bk++;
        }
         if (ak == k)
        {
            ct(am);
            return;
        }
        else
        {
            ct(-1);
            return;
        }
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}