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

void solve()
{
    // Your code here
    int n, m, k;
    cin >> n >> m >> k;
    if (abs(n - m) > k)
    {
        ct(-1);
        return;
    }
    if(max(n,m)<k)
    {
        ct(-1);
        return;
    }
    string s = "";
    char l, r;
    if (n > m)
    {
        l = '0';
        r = '1';
    }
    else
    {
        l = '1';
        r = '0';
    }
    ll mx = max(n, m);
    ll mn = min(n, m);
    bool flag=0;
    for (int i = 0; i < n + m; )
    {
        if (flag == 0)
        {
            for (int j = 0; j < k && mx > 0 &&  i < n + m; j++,i++)
            {
                s += l;
                mx--;
                
            }
            flag =flag^1;
        }
        else
        {
            for (int j = 0; j < k && mn > 0 &&  i < n + m; j++,i++)
            {
                s += r;
                mn--;
            }
            flag =flag^1;
        }
    }
    // ct(mx);
    ct(s);
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