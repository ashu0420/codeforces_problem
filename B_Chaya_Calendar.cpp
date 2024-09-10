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
    ll curr = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cn(x);
        if (curr < x)
        {
            curr = x;
        }
        else
        {
            int k = curr / x;
            k++;
            curr = x  * k;
        }
    }
    ct(curr);
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