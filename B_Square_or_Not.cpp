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
    int n;
    cn(n);
    string s;
    cn(s);
    int k = sqrt(n);
    if (k * k != n)
    {
        pn;
        return;
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i == 0 || i == k - 1)
            {
                if (s[i * k + j] == '0')
                {
                    pn;
                    break;
                }
            }
            else
            {
                if (j == 0 || j == k - 1)
                {
                    if (s[i * k + j] == '0')
                    {
                        pn;
                        return;
                    }
                }
                else
                {
                    if (s[i * k + j] == '1')
                    {
                        pn;
                        return;
                    }
                }
            }
        }
    }
    py;
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