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
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }

using namespace std;

ll MOD = 1e9 + 7;
long long modExp(long long base, long long exp, long long mod)
{
    long long result = 1;
    base = base % mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        exp = exp >> 1; // Divide exp by 2
        base = (base * base) % mod;
    }
    return result;
}

// Function to calculate the modular inverse
long long modInverse(long long a, long long mod)
{
    return modExp(a, mod - 2, mod);
}
void solve()
{
    // Your code here
    ll n;
    cn(n);
    // vector<ll> sum(n, 0);
    // vector<ll> v(n);
    ll pres = 0;
    ll num = 0;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        num += ((pres * x) % MOD);
        pres += x;
        num%=MOD;
        pres%=MOD;
    }

    ll den = modInverse(n * (n - 1) / 2, MOD);
    ct((num * den)%MOD);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}