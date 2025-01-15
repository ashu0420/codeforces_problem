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
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    ll n, k;
    cin >> n >> k;
    vin(a, n);
    vin(b, n);
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        c[i] = a[i] / b[i];
    }
    ll sum = 0;
    vector<ll> ans(n, 0);
    for (ll i = n - 1; i >= 0; i--)
    {
        if (sum + c[i] < k)
        {
            sum += c[i];
            ans[i] = c[i];
        }
        else
        {
            ans[i] = k - sum;
            out(ans,n);
            return;
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<"0 ";
    }
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}