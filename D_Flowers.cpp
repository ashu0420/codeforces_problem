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
int MOD = 1e9 + 7;
const int N = 100009;
int k;
int dp[N];
int fill(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return ((fill(n - 1) + fill(n - k))%MOD);
}
void solve()
{
    // Your code here

    int tc;
    cin >> tc >> k;
    vector<ll> pre(N + 1, 0);
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < N; i++)
    {
        if (dp[i] == -1)
        {
            dp[i] = fill(i);
        }
        pre[i + 1] = (pre[i] + dp[i])%MOD;
    }

    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        cout << ((pre[b + 1] - pre[a])%MOD+MOD) %MOD<< endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}