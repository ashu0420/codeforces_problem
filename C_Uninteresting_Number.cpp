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

using namespace std;

void solve()
{
    // Your code here
    string s;
    cin >> s;
    ll sum = 0;
    ll c2 = 0, c3 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
        if (s[i] == '2')
        {
            c2++;
        }
        if (s[i] == '3')
        {
            c3++;
        }
    }
    // ct(sum);
    if (sum % 9 == 8)
    {
        if (c2 > 4 || (c3 > 0 && c2 > 1))
        {
            py;
            return;
        }
    }
    if (sum % 9 == 7)
    {
        if (c2 > 0)
        {
            py;
            return;
        }
    }
    if (sum % 9 == 6)
    {
        if (c2 > 5 || c3 > 1 || (c3 > 0 && c2 > 2))
        {
            py;
            // ct(c2);
            // ct(c3);
            return;
        }
    }
    if (sum % 9 == 5)
    {
        if (c2 > 1)
        {
            py;
            return;
        }
    }
    if (sum % 9 == 4)
    {
        if ((c2 > 0 && c3 > 1) || c2 > 6 || (c3 > 0 && c2 > 3))
        {
            py;
            return;
        }
    }
    if (sum % 9 == 3)
    {
        if (c2 > 2 || c3 > 0)
        {
            py;
            return;
        }
    }
    if (sum % 9 == 2)
    {
        if ((c2 > 4 && c3 > 0) || (c3 > 1 && c2 > 1) || c2 > 7)
        {
            py;
            return;
        }
    }
    if (sum % 9 == 1)
    {
        if (c2 > 3 || (c3 > 0 && c2 > 0))
        {
            py;
            return;
        }
    }
    if (sum % 9 == 0)
    {
        py;
        return;
    }
    pn;
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