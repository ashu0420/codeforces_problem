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
vector<ll> primes;
void getPrimes(ll n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    for (ll i = 2; i <= n; ++i)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}
void solve()
{
    // Your code here
    ll n;
    cn(n);
    vin(a, n);
    sort(a.begin(), a.end(), [](ll &x, ll &y)
         { return x > y; });

    ll sum = 0;
    ll tot = 0;
    ll i;
    for (i = 0; i < n; i++)
    {
        sum += primes[i];
        tot += a[i];
        if (sum > tot)
        {
            break;
        }
        tot -= sum;
        sum = 0;
    }
    ct(n - i);
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
    getPrimes(6e6+1);
    // for (int i = 1; i < primes.size(); i++)
    // {
    //     primes[i] += primes[i - 1];
    // }
    while (t--)
    {
        solve();
    }
    return 0;
}