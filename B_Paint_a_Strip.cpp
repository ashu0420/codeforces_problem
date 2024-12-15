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
const int N = 1e5 + 1;
int dp[N];

void solve()
{
    // Your code here
    int n;
    cn(n);
    ct(dp[n]);
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
    int curr = 1;
    int val = 1;
    for (int i = 1; i <= N; i++)
    {
        if (i <= curr)
        {
            dp[i] = val;
        }
        else
        {
            val++;
            dp[i] = val;
            curr *= 2;
            curr += 2;
        }
    }
    while (t--)
    {
        solve();
    }
    return 0;
}