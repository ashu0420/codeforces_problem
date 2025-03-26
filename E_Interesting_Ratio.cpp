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
const int N = 1e7 + 1;
vector<int> prime;
vector<bool> is_prime(N, true);

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            prime.push_back(i);
            for (int j = 2 * i; j < N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}
void solve()
{
    // Your code here
    int n;
    cn(n);
    int ans = 0;
    auto itx = lower_bound(prime.begin(), prime.end(), n);
    for (int i = 1; i <= n; i++)
    {
        int x = n / i;
        if (x > 1)
        {
            auto it = lower_bound(prime.begin(), itx, x);
            if (*it > x)
            {
                ans += (distance(prime.begin(), it));
            }
            else
            {
                ans += (distance(prime.begin(), it)) + 1;
            }
        }
        else
        {
            break;
        }
    }
    // ct(prime[prime.size()-1]);
    if (n >= 9999992)/*last prime number*/
    {
        ans--;
    }
    ct(ans);
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
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}