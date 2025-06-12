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
    vin(a, n);
    srt(a);
    int x = a[0];
    for (int i = 1; i < n; i++)
    {
        x = gcd(x, a[i]);
    }
    int ans = 0;
    vector<int> dp(5001, -1);
    if (a[0] == x)
    {
        for (auto i : a)
        {
            if (i != x)
            {
                ans++;
            }
        }
        ct(ans);
    }
    else
    {
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (dp[a[i]] == -1)
            {
                dp[a[i]] = 0;
                q.push(a[i]);
            }
        }
        while (!q.empty() && dp[x] == -1)
        {
            int p = q.front();
            q.pop();
            for (int i = 0; i < n; i++)
            {
                int y = gcd(p, a[i]);
                if (dp[y] == -1)
                {
                    dp[y] = dp[p] + 1;
                    q.push(y);
                }
            }
            // cout<<p<<endl;
        }
        ct(dp[x]+n-1);
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