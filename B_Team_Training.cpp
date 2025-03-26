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
    int n, x;
    cin >> n >> x;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int j;
        cn(j);
        if (j >= x)
        {
            a.push_back(j);
        }
        else
        {
            b.push_back(j);
        }
    }
    int ans = 0;
    int j = 1;
    sort(b);
    for (int i = b.size() - 1; i >= 0; i--)
    {
        if (b[i] * j >= x)
        {
            ans++;
            j = 1;
        }
        else
        {
            j++;
        }
    }
    ans+=a.size();
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
    while (t--)
    {
        solve();
    }
    return 0;
}