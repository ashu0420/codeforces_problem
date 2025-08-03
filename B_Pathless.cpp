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

void solve()
{
    // Your code here
    int n;
    cn(n);
    int s;
    cn(s);
    int tot = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cn(v[i]);
        tot += v[i];
    }
    if (tot > s)
    {
        out(v, n);
        return;
    }
    s -= tot;
    int x = 0;
    int y = 0;
    while (1)
    {
        if(2*x>s)
        {
            break;
        }
        for (y = 0; 2 * x + 3 * y <= s; y++)
        {
            // cout<<x<<" "<<y<<endl;
            if (2 * x + 3 * y == s)
            {
                ct(-1);
                return;
            }
        }
        x++;
    }
    srt(v);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            cnt++;
            continue;
        }
        cout<<v[i]<<" ";
    }
    while(cnt--)
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}