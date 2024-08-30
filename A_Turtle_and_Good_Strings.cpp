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
    int n;
    cn(n);
    string s;
    cn(s);
    if(s[0]!=s[n-1])
    {
        py;
        return;
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
}