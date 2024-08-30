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
    int c1 = 0;
    int c0 = 0;
    int n;
    cn(n);
    char px='1';
    string s;
    cn(s);
    for (int i = 0; i < n; i++)
    {
        // i x;
        // // cn(x);
        // ct(px);
        // ct(x);
        if (s[i] == '1')
        {
            c1++;
        }
        if (s[i] == '1' && px == '0')
        {
            c0++;
        }
        px = s[i];
    }
    if(s[n-1]=='0')
    {
        c0++;
    }
    // ct(c0);
    // ct(c1);
    c0 < c1 ? py : pn;
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