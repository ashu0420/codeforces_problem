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
    int n;
    cn(n);
    vin(v, n);
    bool flag = 0;
    int s, l;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            flag = 1;
            s = i;
            break;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] != 0)
    //     {
    //         // flag = 1;
    //         s = i;
    //         break;
    //     }
    // }
    if (flag == 0)
    {
        ct("0");
        return;
    }
    for (int i = n - 1; i >= s; i--)
    {
        if (v[i] != 0)
        {
            l = i;
            break;
        }
    }
    for(int i=s;i<=l;i++)
    {
        if(v[i]==0)
        {
            ct("2");
            return;
        }
    }
    ct("1");
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