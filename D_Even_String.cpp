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
#define vin(a, n)     \
    vector<int> a(n); \
    in(a, n);
const int MOD = 998244353;
using namespace std;
vector<ll> fact(5e5 + 1, 0);
void fc()
{
    fact[0] = 1;
    for (int i = 1; i < 5e5 + 1; i++)
    {
        fact[i] = (fact[i - 1] * (i)) % MOD;
        fact[i] %= MOD;
    }
}
long long countWaysToSum(vector<int> &arr, int x)
{
    vector<long long> dp(x + 1, 0);
    dp[0] = 1; // 1 way to make sum 0 (by selecting nothing)

    for (int num : arr)
    {
        for (int j = x; j >= num; j--)
        { // Process in reverse to avoid double counting
            dp[j] += dp[j - num];
        }
    }

    return dp[x];
}
long long power(long long a, long long b, long long m)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// Modular Inverse using Fermat's Theorem (since MOD is prime)
long long modInverse(long long a)
{
    ll inv = power(a, MOD - 2, MOD);
    return (inv % MOD + MOD) % MOD;
}
ll ans;
ll x;


ll tot;
void solve()
{
    // Your code here
    vector<int> arr;
    for (int i = 0; i < 26; i++)
    {
        int x;
        cn(x);
        if (x > 0)
        {
            arr.push_back(x);
        }
    }
    vector<int> curr;
    x = 0;
    ans = 0;
    for (auto i : arr)
    {
        x += i;
    }

    tot = ((fact[x / 2] % MOD) * (fact[(x + 1) / 2] % MOD)) % MOD;
    for (auto i : arr)
    {
        tot = (tot * modInverse(fact[i])) % MOD;
        tot = (tot + MOD) % MOD;  // Ensure non-negative
    }

    ct((countWaysToSum(arr, x / 2) * tot) % MOD);

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
    fc();
    while (t--)
    {
        solve();
    }
    return 0;
}