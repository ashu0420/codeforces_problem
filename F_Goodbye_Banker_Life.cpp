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
ll pw(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += (n / 2);
        n /= 2;
    }
    return ans;
}
void solve()
{
    // Your code here
    int n;
    string k;
    cin >> n >> k;
    ll n1 = pw(n - 1);
    for (int i = 0; i < n; i++)
    {
        ll n2 = pw(n - i - 1);
        ll n3 = pw(i);
        if ((n1 - n2 - n3))
        {
            cout << "0 ";
        }

        else
        {
            cout << k << " ";
        }
    }
    cout << endl;
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