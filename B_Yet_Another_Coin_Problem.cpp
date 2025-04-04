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
const int N = 1e9;
vector<int> arr;
vector<ll> dp(31);
void solve()
{
    // Your code here
    int n;
    cn(n);
    if (n > 30)
    {
        ll ans = n / 15;
        ct(min(ans + dp[n % 15], ans - 1 + dp[(n % 15) + 15]));
    }
    else
    {
        ct(dp[n]);
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
    arr = {1, 3, 6, 10, 15};
    dp[0] = 0;
    for (int i = 1; i <= 30; i++)
    {
        dp[i] = INT32_MAX;
        for (auto k : arr)
        {
            if (i - k >= 0)
            {
                dp[i] = min(dp[i], dp[i - k] + 1);
            }
        }
    }
    while (t--)
    {
        solve();
    }
    return 0;
}