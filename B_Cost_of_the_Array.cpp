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
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cn(v[i]);
    }
    int c = 1;
    if (n == k)
    {
        for (int i = 2; i <= n; i += 2)
        {
            // ct(v[i]);
            if (c != v[i])
            {
                ct(c);
                return;
            }
            c++;
        }
        ct(c);
        return;
    }
    for(int i=2;i<=n-k+2;i++)
    {
        if(v[i]!=1)
        {
            ct("1");
            return;
        }
    }
    ct("2");
    // if (v[3] == 1 && v[2] == 1)
    // {
    //     ct("2");
    //     return;
    // }
    // else
    // {
    //     ct("1");
    //     return;
    // }
    return;
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