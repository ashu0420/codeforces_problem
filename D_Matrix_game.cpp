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
// vector<ll> dp(1e5 + 1, 0);

#include <iostream>
using namespace std;

// Fast modular exponentiation
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

// Modular inverse using Fermat's little theorem
ll modular_inverse(ll denom)
{
    return mod_pow(denom, MOD - 2);
}

// // Division under modulo: A / B % MOD
// ll divide_mod(ll A, ll B)
// {
//     return (A % MOD) * modular_inverse(B) % MOD;
// }

void solve()
{
    int a, b, k;
    cin >> a >> b >> k;

    // n = (a-1)*k + 1
    ll n = 1LL * (a - 1) * k + 1;
    n %= MOD;

    // Compute C(n, a) = n * (n-1) * ... * (n-a+1) / a!
    ll d = 1;
    ll p = n;
    for (int i = 0; i < a; i++)
    {
        d = (d * p) % MOD;
        p--;
    }

    // Divide by a! modulo MOD
    for (int i = 1; i <= a; i++)
    {
        d = (d * modular_inverse(i)) % MOD;
    }

    // m = k(b - 1) * C(n, a) + 1
    ll m = (1LL * k * (b - 1)) % MOD;
    m = (m * d) % MOD;
    m = (m + 1) % MOD;

    cout << n << " " << m << endl;
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
    // dp[0] = 1;
    // for (int i = 1; i < 1e5 + 1; i++)
    // {
    //     dp[i] = (dp[i - 1] * i) % MOD;
    // }
    while (t--)
    {
        solve();
    }
    return 0;
}