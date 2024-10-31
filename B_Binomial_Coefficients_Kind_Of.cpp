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
const int MOD = 1e9 + 7;
int dp[100001] = {0};

void solve()
{
    // Your code here
    // int n,k;
    int t;
    cn(t);
    dp[0] = 1;
    vector<pair<int, int>> p(t);
    for (int i = 0; i < t; i++)
    {
        cin >> p[i].first;
    }
    for (int i = 0; i < t; i++)
    {
        cin >> p[i].second;
    }
    ll temp = 1;
    for (int i = 1; i < 100000; i++)
    {
        dp[i] = (temp * 2) % MOD;
        temp = dp[i];
    }
    for (int i = 0; i < t; i++)
    {

        ct(dp[p[i].second]);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    // int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
    return 0;
}