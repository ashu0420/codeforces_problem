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

void solve()
{
    // Your code here
    string a, b;
    cin >> a >> b;
    int n = a.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] == '0' && a[i + 1] == '1' && b[i] == '0' && b[i + 1] == '1')
        {
            py;
            return;
        }
    }
    pn;
    return;
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