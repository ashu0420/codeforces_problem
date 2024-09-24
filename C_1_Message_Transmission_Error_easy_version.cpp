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
    string s;
    cn(s);
    int n = s.size();
    int mlast = n / 2;
    if(n%2)
    {
        mlast++;
    }
    int i = 1;
    while (i < mlast)
    {
        // ct(i);
        if (s[i] != s[0])
        {
            i++;
        }
        else
        {
            int j = 0;
            for (j; j + i < n; j++)
            {
                if (s[j] != s[j + i])
                {
                    break;
                }
            }
            if (j + i == n)
            {
                py;
                ct(s.substr(0, j));
                return;
            }
            i++;
        }
    }
    pn;
    return;
}

int main()
{
    int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
    return 0;
}